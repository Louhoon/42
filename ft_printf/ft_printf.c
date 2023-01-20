/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/09 17:56:07 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/20 08:55:13 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *s, ...)
{
		ft_putstr(s);
		return (0);
}

int main(void)
{	
	ft_printf("myprintf\n");
	printf("original\n");
	return (0);
}