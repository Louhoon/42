/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 02:40:23 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/24 02:40:23 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

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

static    int    take_word(char **string, int size, const char *s, char c)
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
	string[i] = malloc(sizeof(char) * len);
	if (!string)
		return (0);
	ft_strlcpy(string[i], start, len);
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
	new_string = malloc(sizeof(char *) * (strings + 1));
	if (!new_string)
		return (NULL);
	take_word(new_string, strings, s, c);
	return (new_string);
}

// int main()
// {
//   // test the function
//   char s[] = "To be, or not to be, that is the question.";
//   int count_strings = 10;
//   char **split_strings = ft_split(s, 'a');
  
//   // print out the substrings, which should be each word of the sentence above
//   for (int i = 0; i < count_strings; i++)
//     printf("%s\n", split_strings[i]);
  
//   // free the dynamically allocated space for each string
//   for (int i = 0; i < count_strings; i++)
//     free(split_strings[i]);
  
//   // free the dynamically allocated space for the array of pointers to strings
//   free(split_strings);

// //system("leaks a.out");
  
//   return 0;
// }
