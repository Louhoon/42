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

static	const char	*store_words(char **dest, const char *src, char c)
{
	int	len;
	int	i;

	len = 0;
	while (*src == c)
		src++;
	while (src[len] != '\0' && src[len] != c)
		len++;
	*dest = malloc(sizeof(char) * (len + 1));
	if (!*dest)
		return (0);
	i = 0;
	while (i < len)
	{
		(*dest)[i] = src[i];
		i++;
	}
	(*dest)[i] = '\0';
	src = src + len + 1;
	return (src);
}

char	**ft_split(char const *s, char c)
{
	char	**new_strings;
	int		strings;
	int		i;

	strings = counter(s, c);
	new_strings = malloc(sizeof(char *) * (strings + 1));
	if (!new_strings)
	{
		new_strings[strings] = NULL;
		i = 0;
		while (i < strings)
		{
			s = store_words(new_strings + i, s, c);
			i++;
		}
	}
	return (new_strings);
}
