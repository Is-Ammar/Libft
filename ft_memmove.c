/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:16:37 by iammar            #+#    #+#             */
/*   Updated: 2024/10/31 16:49:16 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*cpy(char *cdest, const char *csrc, size_t n)
{
	size_t	i;

	i = 0;
	if (csrc > cdest)
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			cdest[i - 1] = csrc[i - 1];
			i--;
		}
	}
	return (cdest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*csrc;
	char		*cdest;

	if (dest == NULL || src == NULL || n == 0)
		return (dest);
	cdest = (char *)dest;
	csrc = (const char *)src;
	return (cpy(cdest, csrc, n));
}
