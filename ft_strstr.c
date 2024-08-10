/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:11:03 by iammar            #+#    #+#             */
/*   Updated: 2024/08/10 21:43:13 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	 char	*tmp_str;
	 char	*tmp_to_find;

	if (!*to_find)
		return (str);
	while (*str)
	{
		tmp_str = str;
		tmp_to_find = to_find;
		while (*tmp_str && *tmp_to_find && *tmp_str == *tmp_to_find)
		{
			tmp_str++;
			tmp_to_find++;
		}
		if (!*tmp_to_find)
			return (str);
		str++;
	}
	return (0);
}
