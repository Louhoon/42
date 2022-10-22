/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:30:18 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/19 10:30:18 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static    int    counte_string(char *str, char c, int *count)
{
    int i;
    int len;

    len = ft_strlen(str);
    *count = 0;
    i = 0;
    while (i < len)
    {
        while (i < len)
        {
            if (strchr(str[i], c) == NULL)
                break ;
            i++;
        }
        int old_i;
        old_i = i;
        while (i < len)
        {
            if (strchr(str[i], c) != NULL)
                break ;
            i++;
        }
        if (i > old_i)
            *count = *count + 1;
    }
    return (*count);
}

// static    int    take_word(char **new_string, int size, const char *s, char c)
// {
//     const char *start;
//     const char *end;
//     int len;
//     int i;
    
//     i = 0;
//     start = s;
//     while (i < size)
//     {
//     end = ft_strchr(start, c);
//     len = end - start + 1;
//     new_string[i] = malloc(sizeof(s) * len);
//     ft_strlcpy(new_string[i], start, len);
//         i++;
//         start = end + 1;
//     }
//     return (1);
// }

// char    **ft_split(char const *s, char c)
// {
//     char **new_string;
//     int strings;

//     strings = counter(s, c);
//     new_string = malloc(sizeof(s) * strings + 1);
// 	if (!new_string)
// 		return (NULL);
//     take_word(new_string, strings, s, c);
//     return (new_string);
// }

// int main()
// {
// 	char **s;
// 	s = ft_split("hello world dfg", ' ');
// 	while (*s)
//     printf("%s\n", *s++);
// 	//system("leaks a.out");
//     return (1);
// }
