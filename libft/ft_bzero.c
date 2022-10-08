/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:22:10 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/06 16:59:32 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char str[] = "hello dhehes";
// 	printf("\nBefore ft_bzero: %s\n", str);
// 	ft_bzero(str, sizeof(char));
// 	printf("\nAfter ft_bzero: %s\n", str);
// }