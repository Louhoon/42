/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:19:09 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/11/01 15:17:25 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int main1(void)
// {
// 	char *s = "ho";
// 	char *str = ft_substr(s, 2, 3);
// 	printf("%s\n", str);
// 	free(str);
// 	// system("leaks a.out");
// 	return 0;
// }

// int main(void) {
// 	main1();
// 	while(1);
// }