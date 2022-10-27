/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: marvin <marvin@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 11:47:54 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/27 09:12:12 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// s1 the string to be trimmed
// set the set of characters to trim
// allocate memory to the trimmed string
// return the trimmed string
// string should be trim in the beginning and end of string

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	start;
	char	*trimmed;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed = malloc(sizeof(s1[i]) * (end - start + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

// int main(void)
// {
// 	char s1[] = "hello.world.hello";
// 	char *plubuscule = ft_strtrim(s1, "hello.");
// 	printf("%s\n", plubuscule);
// 	free(plubuscule);
// 	return (0);
// }
