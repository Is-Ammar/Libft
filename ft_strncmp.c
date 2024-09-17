/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:41:46 by iammar            #+#    #+#             */
/*   Updated: 2024/09/17 17:50:48 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && *(s1 + i) == *(s2 + i) && i < n)
	{
		i++;
	}
	return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
}
