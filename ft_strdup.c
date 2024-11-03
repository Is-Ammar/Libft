/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:36:19 by iammar            #+#    #+#             */
/*   Updated: 2024/10/31 16:49:42 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;
	size_t	size;

	size = ft_strlen(src);
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, src, size + 1);
	return (new);
}
