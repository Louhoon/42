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

static    int    counter(const char *str, char c)
{
    int i;

    i = 1;
    while (*str != '\0')
    {
        if (*str == c)
        i++;
        str++;
    }
    return (i);
}

static    int    take_word(char **new_string, int size, const char *s, char c)
{
    const char *start;
    const char *end;
    int len;
    int i;
    
    i = 0;
    start = s;
    while (i < size)
    {
    end = ft_strchr(start, c);
    len = end - start + 1;
    new_string[i] = malloc(sizeof(s) * len);
    ft_strlcpy(new_string[i], start, len);
        i++;
        start = end + 1;
    }
    return (1);
}

char    **ft_split(char const *s, char c)
{
    char **new_string;
    int strings;

    strings = counter(s, c);
    new_string = malloc(sizeof(s) * strings + 1);
	if (!new_string)
		return (NULL);
    take_word(new_string, strings, s, c);
    return (new_string);
}

// int main()
// {
// 	char **s;
// 	s = ft_split("hello world dfg", ' ');
// 	while (*s)
//     printf("%s\n", *s++);
// 	//system("leaks a.out");
//     return (1);
// }
