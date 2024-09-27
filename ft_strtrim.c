/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:56:42 by iammar            #+#    #+#             */
/*   Updated: 2024/09/27 16:18:49 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	end = ft_strlen(s);
	while (s[start] && (s[start] == ' ' || s[start] == '\n'
			|| s[start] == '\t'))
	{
		start++;
	}
	while (end > start && (s[end - 1] == ' ' || s[end - 1] == '\n'
			|| s[end - 1] == '\t'))
	{
		end--;
	}
	len = end - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strncpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
