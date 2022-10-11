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

//#include <stdio.h>
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
