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

static char	**free_tab(char **result)
{
	int	i;

	if (!result)
		return (NULL);
	i = 0;
	while (result[i])
	{
		free(result[i]);
		result[i] = NULL;
		i++;
	}
	free (result);
	return (NULL);
}


static	int	counter(const char *str, char c)
{
	int	i;
	int	count_word;

	i = 0;
	count_word = 0;
	if (str[i] == '\0')
		count_word = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		if (str[i] == c && str[i])
		{
			count_word++;
			while (str[i] == c && str[i])
			i++;
		}
		if (str[i] != c && str[i])
			i++;
	}
	if (str[i - 1] != c)
			count_word++;
	return (count_word);
}

static	int	end_word(const char *s, char c, int i)
{
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static	int	store_words(char **new_string, const char *s, char c)
{
	int	end;
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			end = end_word(s, c, i);
			new_string[i] = ft_calloc(end - i + 1, sizeof(**new_string));
			if (!*new_string)
				return (0);
			ft_memcpy(*new_string, s + i, end - i);
			new_string++;
			i = end - 1;
		}
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**new_string;
	int		strings;

	strings = counter(s, c);
	new_string = ft_calloc(strings + 1, sizeof(*new_string));
	if (!new_string)
		return (NULL);
	if (!store_words(new_string, s, c))
			return (free_tab(new_string));
	
	return (new_string);
}

int main()
{
  char s[] = "lorem ipsum";
  int count_strings = 2;
  char **split_strings = ft_split(s, ' ');
  for (int i = 0; i < count_strings; i++)
	printf("%s\n", split_strings[i]);
  for (int i = 0; i < count_strings; i++)
	free(split_strings[i]);
  free(split_strings);
//system("leaks a.out");
  return 0;
}