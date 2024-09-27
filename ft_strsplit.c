/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:22:08 by iammar            #+#    #+#             */
/*   Updated: 2024/09/27 18:41:20 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_strsplit(char const *s, char c) 
{
    int count = 0;
    char **result;
    const char *start;
    int i = 0;
    int len;
    
    while (*s) 
    {
        while (*s == c) s++; 
        start = s;
        while (*s && *s != c) s++; 
        if (start != s) count++; 
    }
    result=(char **)malloc((count + 1)*sizeof(char *));
    if(result == NULL)
    return NULL;
    result[count] = NULL;

    s-=ft_strlen(s);
    
  while (*s) 
    {
        while (*s == c) s++; 
        start = s;
        while (*s && *s != c) s++; 
        if (start != s) 
        {
            len = s - start;
            result[i] = (char *)malloc((len + 1) * sizeof(char));
            if (result[i] == NULL)
             {
                while (i > 0) {
                    free(result[--i]);
                }
                free(result);
                return NULL;
            }
            ft_strncpy(result[i], start, len);
            result[i][len]='\0';
            i++;
        }
    }
    return (result);
}
int main()
{
    char **arr = ft_strsplit("this****is*me*",'*');
    int i = 0;
    while(arr[i])
    {
        printf("%s\n",arr[i]);
        free(arr[i]);
        i++;
    }
    free(arr);
    return 0;
}