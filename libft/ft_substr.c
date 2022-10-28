/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 11:32:57 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/28 10:32:43 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	substr_len;
	char	*substr;

	i = 0;
	substr_len = ft_strlen(s);
	if (start >= substr_len)
		return (ft_strdup(""));
	if (substr_len < len)
		len = substr_len - start;
	substr = malloc((sizeof(char) * (len + 1)));
	if (substr == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main(void)
// {
// 	char *s = "hola you";
// 	char *str = ft_substr(s, 2, 30);
// 	printf("%s\n", str);
// 	//system("leaks a.out");
// }