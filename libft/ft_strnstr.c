/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 13:54:38 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/24 04:52:59 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *fullString, const char *substring, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!fullString && !substring)
		return (NULL);
	if (!substring[0])
		return ((char *)fullString);
	while (fullString[i])
	{
		j = 0;
		while (fullString[i + j] && (i + j) < len)
		{
			if (fullString[i + j] != substring[j])
				break ;
			j++;
		}
		if (substring[j] == '\0')
			return (&(((char *) fullString)[i]));
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	const char fullString[] = "Foo Bar Baz";
// 	const char substring[] = "Bar";
// 	char *ptr;

// 	printf(("%s\n"), ptr = ft_strnstr(fullString, substring, 12));
// 	printf(("%s\n"), ptr = strnstr(fullString, substring, 12));
// }