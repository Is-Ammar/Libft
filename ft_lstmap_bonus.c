/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:07:09 by iammar            #+#    #+#             */
/*   Updated: 2024/09/30 23:17:56 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*current;
	t_list	*new_elem;

	new_list = NULL;
	current = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst)
	{
		new_elem = f(lst);
		if (!new_elem)
		{
			ft_lstdelone(&new_list, free);
			return (NULL);
		}
		if (!new_list)
		{
			new_list = new_elem;
			current = new_list;
		}
		else
		{
			current->next = new_elem;
			current = new_elem;
		}
		lst = lst->next;
	}
	return (new_list);
}
