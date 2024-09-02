/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:56:56 by iammar            #+#    #+#             */
/*   Updated: 2024/09/02 15:15:28 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*tmp;

	tmp = dst;
	while (*src && n > 0)
	{
		*tmp++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*tmp++ = '\0';
		n--;
	}
	return (dst);
}
