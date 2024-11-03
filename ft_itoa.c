/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:16:08 by iammar            #+#    #+#             */
/*   Updated: 2024/10/31 16:48:35 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_prepare(char *s, int *n)
{
	if (*n < 0)
	{
		s[0] = '-';
		*n = -(*n);
	}
	else if (*n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return ;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	ft_prepare(s, &n);
	if (n == 0)
		return (s);
	i = len - 1;
	while (n > 0)
	{
		s[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	s[len] = '\0';
	return (s);
}
