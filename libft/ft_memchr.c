/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:15:25 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/11/01 13:14:08 by lvoisin-      ########   odam.nl         */
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