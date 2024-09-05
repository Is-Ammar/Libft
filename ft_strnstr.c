/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:06:14 by iammar            #+#    #+#             */
/*   Updated: 2024/09/05 22:13:29 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t		i;
	const char	*tmp_str;
	const char	*tmp_to_find;

	if (!*to_find)
		return ((char *)str);
	i = 0;
	while (str[i] && i < n)
	{
		tmp_str = str + i;
		tmp_to_find = to_find;
		while (*tmp_str && *tmp_to_find && *tmp_str == *tmp_to_find && i
			+ (tmp_to_find - to_find) < n)
		{
			tmp_str++;
			tmp_to_find++;
		}
		if (!*tmp_to_find)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
