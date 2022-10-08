/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:16:56 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/07 20:50:21 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (dst == NULL)
	return NULL;
	char *char_dst;
	char *char_src;
	
	char_dst = (char *) dst;
	char_src = (char *) src;
	while (i < (int) n)
		{
			char_dst[i] = char_src[i];
			i++;
		}
		return dst;
}

// int main(void)
// {
// 	char src[] = "love you cat";
// 	char dest[50];
// 	ft_memcpy(dest, src, sizeof(char) * 50);
// 	printf("src = %s\n", src);
// 	printf("dest = %s\n", dest);
// }