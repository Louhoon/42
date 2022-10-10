/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:06:49 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/10 21:44:09 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int) n)
	{
		if (((unsigned char *) s)[i] == (unsigned char) c)
			return (&(((unsigned char *) s)[i]));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	#include "libft.h"

// 	char str[] = "louane.voisin@hotmail.com";
// 	char *st = ft_memchr(str, '@', ft_strlen(str));
// 	printf("%s\n", st);
// 	char *s = memchr(str, '@', strlen(str));
// 	printf("%s\n", s);
// }