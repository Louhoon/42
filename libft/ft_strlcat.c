/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:28:07 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/11 21:01:26 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(dst) < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && j + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	return (ft_strlen(dst) + ft_strlen(src));
}

// int main(void)
// {
// 	char src[] = "you";
// 	char dest[20] = "hello";

// 	char src1[] = "hello";
// 	char dest1[20] = "you";
	
// 	printf("%zu\n", ft_strlcat(dest1, src1, 10));
// 	ft_strlcat(dest1, src1, 10);
// 	printf("%s\n", dest1);

// 	printf("%zu\n", strlcat(dest, src, 10));
// 	strlcat(dest, src, 10);
// 	printf("%s\n", dest);

// }
