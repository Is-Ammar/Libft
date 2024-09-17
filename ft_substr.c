/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:57:54 by iammar            #+#    #+#             */
/*   Updated: 2024/09/17 17:40:12 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *src, size_t m, size_t n)
{
	size_t	len;
	size_t	i;
	char	*dst;

	len = n - m;
	if (m > ft_strlen(src))
	{
		return (NULL);
	}
	dst = malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		dst[i] = src[m + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
