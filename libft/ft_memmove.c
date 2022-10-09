/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:41:39 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/07 19:39:52 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*char_dest;
	char	*char_src;

	char_dest = (char *) dest;
	char_src = (char *) src;
	if ((dest == NULL) || (src == NULL))
		return (NULL);
	if (dest > src)
	{
		i = 0;
		while (i < (int) n)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < (int) n)
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	#include <string.h>
// 	#include <stdio.h>

// 	char s[20] = "alightechs";
// 	ft_memmove(s+5, s, 7);
// 	printf("%s\n", s);
// 	memmove(s+5, s, 7);
// 	printf("%s\n", s);
// }