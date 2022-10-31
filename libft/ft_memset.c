/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:16:06 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 15:16:06 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t				i;

	i = 0;
	while (i < n)
	{
		(((unsigned char *)b)[i]) = (unsigned char) c;
		i++;
	}
	return (b);
}

// int main(void)
// {
//     char str[50] = "";
//     printf("\nBefore ft_memset: %s\n", str);
//     ft_memset(str, 'A', 5*sizeof(char));
//     printf("\nAfter ft_memset: %s\n", str);
// }
