/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:05:59 by marvin            #+#    #+#             */
/*   Updated: 2022/09/20 23:05:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_isalpha(int c)
{
   return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*int main(void)
{
    char c = 'd';
    if(ft_isalpha(c) != 0)
    {
       printf("%c is an alphabetical character", c); 
    }
    else
    {
          printf("%c is not an alphabetical character", c);
    }
}*/