/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:41:39 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/05 18:35:00 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memset(void *b, int c, size_t n)
{
    int i;
    i = 0;
unsigned char *ptr;
ptr = b;
while(i < (int) n)
{
    *ptr = c;
    ptr++;
    i++;
}
return(b);
}

// int main(void)
// {
//     char str[50] = "Hello world, i made it through the piscine";
//     printf("\nBefore ft_memset: %s\n", str);
//     ft_memset(str + 13, '.', 5*sizeof(char));
//     printf("\nAfter ft_memset: %s\n", str);
// }