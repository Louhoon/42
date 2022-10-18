/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:47:54 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/18 02:48:32 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s1 the string to be trimmed
// set the set of characters to trim
// allocate memory to the trimmed string
// return the trimmed string
// string should be trim in the beginning and end of string

#include "libft.h"

// static	int	check_set(char const *set, char c)
// {
// 	size_t	i;

// 	i = 0;
// 	while (set[i])
// 	{
// 		if (set[i] == c)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

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
// 	char s1[] = "";
// 	char *plubuscule = ft_strtrim(s1, "");
// 	printf("%s\n", plubuscule);
// 	free(plubuscule);
// 	return (0);
// }
