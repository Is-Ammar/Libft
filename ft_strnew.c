/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:01:09 by iammar            #+#    #+#             */
/*   Updated: 2024/09/26 18:36:34 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	s = (char *)malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	ft_bzero(s, size + 1);
	return (s);
}
