/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:15:56 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 15:15:56 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	if (dest > src)
	{
		i = (int) n - 1;
		while (i >= 0)
		{
			((char *) dest)[i] = ((char *) src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int) n)
		{
			((char *) dest)[i] = ((char *) src)[i];
			i++;
		}
	}
	return (dest);
}

// int main(void)
// {
// 	#include <string.h>
// 	#include <stdio.h>

// 	char s[] = "\0";
// 	char s1[4] = "you";
// 	ft_memmove(s1, s, 4);
// 	printf("%s\n", s1);
// 	memmove(s1, s, 4);
// 	printf("%s\n", s1);
// }
