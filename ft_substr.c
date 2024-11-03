/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:12:36 by iammar            #+#    #+#             */
/*   Updated: 2024/10/31 16:50:16 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	start_copy;
	size_t	i;
	char	*dst;

	if (!s)
		return (NULL);
	dst = malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
	{
		return (NULL);
	}
	if (start >= ft_strlen(s))
	{
		dst[0] = '\0';
		return (dst);
	}
	i = 0;
	start_copy = (size_t)start;
	while (i < len)
	{
		dst[i] = s[start_copy + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
