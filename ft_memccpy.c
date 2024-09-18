/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:26:31 by iammar            #+#    #+#             */
/*   Updated: 2024/09/18 22:44:12 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	*csrc;
	char		*cdest;
	size_t		i;

	cdest = (char *)dest;
	csrc = (const char *)src;
	i = 0;
	while (i < n)
	{
		*(cdest + i) = *(csrc + i);
		if (*(csrc + i) == (char)c)
		{
			return ((cdest + i + 1));
		}
		i++;
	}
	return (NULL);
}
