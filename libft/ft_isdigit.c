/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:11:07 by marvin            #+#    #+#             */
/*   Updated: 2022/09/20 23:11:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_isdigit(int c)
{
    return((c >= '0' && c <= '9'));
}

/*int main(void)
{
        char c = 'T';
    if(ft_isdigit(c) != 0)
    {
       printf("%c is a digit character", c); 
    }
    else
    {
          printf("%c is not a digit character", c);
    }
}*/