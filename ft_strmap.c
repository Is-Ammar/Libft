/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:37:30 by iammar            #+#    #+#             */
/*   Updated: 2024/09/26 21:49:33 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	unsigned int	i;
	char			*s1;

	if (!s || !f)
	{
		return (NULL);
	}
	s1 = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (s1 == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		s1[i] = f(s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
