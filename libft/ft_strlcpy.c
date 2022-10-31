/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:17:53 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 15:17:56 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize > 0)
	{
		while (src[i] && i < (destsize - 1))
		{
		dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// int main(void)
// {
// 	char src[] = "hello";
// 	char dest[5];

// 	char src1[] = "hello";
// 	char dest1[20];

// 	printf("%zu\n", ft_strlcpy(dest, src, 6));
// 	printf("%zu\n", strlcpy(dest, src, 6));
// 	printf("%s\n", ft_strlcpy(dest1, src1, 6));
// 	printf("%s\n", strlcpy(dest1, src1, 6));
// }