/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:17:13 by iammar            #+#    #+#             */
/*   Updated: 2024/10/31 16:49:36 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

char	*get_next_word(const char **s, char c)
{
	const char	*start;
	int			length;
	char		*word;
	int			i;

	while (**s && **s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	length = *s - start;
	word = malloc(length + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	free_split(char **result, int count)
{
	int	j;

	j = 0;
	while (j < count)
	{
		free(result[j]);
		j++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < word_count)
	{
		result[i] = get_next_word(&s, c);
		if (!result[i])
		{
			free_split(result, i);
			return (NULL);
		}
		i++;
	}
	result[word_count] = NULL;
	return (result);
}

// int main() {
//     char **result = ft_strsplit("%%out%%%%%%%%%%%aAs%%%a%%test%%%", '%');
//     if (result) {
//         for (int i = 0; result[i] != NULL; i++) {
//             printf("%s", result[i]);
// 			printf(" ");
//             free(result[i]);
//         }
//         free(result);
//     }
//     return (0);
// }
