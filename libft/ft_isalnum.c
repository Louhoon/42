/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:26:45 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/05 14:26:48 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include <stdio.h>

int ft_isalnum(int c)
{
	return(((c >= '0' && c <= '9') 
	|| (c >= 'a' && c <= 'z') 
	|| (c >= 'A' && c <= 'Z')));
}

/*int main(void)
{
	char c = '1';
	if(ft_isalnum(c) != 0)
	{
	   printf("%c is an alphanum character", c); 
	}
	else
	{
		  printf("%c is not an alphanum character", c);
	}
}*/