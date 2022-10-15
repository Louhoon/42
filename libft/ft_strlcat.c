/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:28:07 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/15 15:48:42 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dest_len;
	i = 0;
	if (dest_len < dstsize - 1 && dstsize > 0)
	{
		while (src[i])
		{
			dst[j] = src[i];
			j++;
			i++;
			if (j == dstsize - 1)
				break ;
		}
		dst[j] = '\0';
	}
	if (dest_len >= dstsize)
		dest_len = dstsize;
	return (dest_len + src_len);
}

// int main(void)
// {
// 	char src[] = "you";
// 	char dest[20] = "hello";

// 	char src1[] = "you";
// 	char dest1[20] = "hello";

// 	printf("%zu\n", ft_strlcat(dest1, src1, 0));
// 	ft_strlcat(dest1, src1, 0);
// 	printf("%s\n", dest1);

// 	printf("%zu\n", strlcat(dest, src, 0));
// 	strlcat(dest, src, 0);
// 	printf("%s\n", dest);
// }
