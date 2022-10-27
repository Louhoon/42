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
			count_word = count_word + 1;
	return (count_word);
}

static	int	take_word(char **new_string, int size, const char *s, char c)
{
	const char	*start;
	const char	*end;
	int			len;
	int			i;

	i = 0;
	start = s;
	while (i < size)
	{
	end = ft_strchr(start, c);
	len = end - start + 1;
	new_string[i] = malloc(sizeof(char) * (counter(s, c) + 1));
		if (!new_string[i])
			return (0);
		ft_strlcpy(new_string[i], start, len);
		i++;
		start = end + 1;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**new_string;
	int		strings;
	int		i;

	strings = counter(s, c);
	new_string = malloc(sizeof(s) * (strings + 1));
	if (!new_string)
		return (NULL);
	i = take_word(new_string, strings, s, c);
	new_string[i] = NULL;
	return (new_string);
}

int main()
{
  char s[] = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
  int count_strings = 12;
  char **split_strings = ft_split(s, ' ');
  for (int i = 0; i < count_strings; i++)
	printf("%s\n", split_strings[i]);
  for (int i = 0; i < count_strings; i++)
	free(split_strings[i]);
  free(split_strings);
//system("leaks a.out");
  return 0;
}