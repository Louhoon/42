/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:27:53 by marvin            #+#    #+#             */
/*   Updated: 2022/09/20 23:27:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_isascii(int c)
{
    return(c >= 0 && c <= 127);
}

/*int main(void)
{
        unsigned char c = '«';
    if(ft_isascii(c) != 0)
    {
       printf("%c is an ascii character", c); 
    }
    else
    {
          printf("%c is not an ascii character", c);
    }
}*/