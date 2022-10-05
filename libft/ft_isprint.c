/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:36:01 by marvin            #+#    #+#             */
/*   Updated: 2022/10/05 21:08:26 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}

/*int main(void)
{
		char c = '\0';
	if(ft_isprint(c) != 0)
	{
	   printf("%c is a printable character", c); 
	}
	else
	{
		  printf("%c is not a printable character", c);
	}
}*/