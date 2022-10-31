/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 13:56:31 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 17:36:47 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	**free_tab(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static	int	counter(const char *str, char c)
{
	int	i;
	int	count_word;

	i = 0;
	count_word = 0;
	if (!str)
		return (0);
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
	if (i > 0 && str[i - 1] != c)
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
	{
		free_tab(dest);
		return (NULL);
	}
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
	if (new_strings)
	{
		new_strings[strings] = NULL;
		i = 0;
		while (i < strings)
		{
			s = store_words(new_strings + i, s, c);
			if (s == NULL)
				return (NULL);
			i++;
		}
	}
	return (new_strings);
}

// int main()
// {
// 	char s[] = "";
// 	char **result;
// 	result = ft_split(s, ' ');
// 	int i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return 1;
// 	// system("leaks a.out");
// }

// int main(void) {
// 	main1();
// 	// while(1);
// }
