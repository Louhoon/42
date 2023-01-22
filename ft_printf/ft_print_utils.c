/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_utils.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 09:12:36 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/22 19:40:53 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printstr(const char *s)
{
	int i;
	
	if (s != NULL)
		i = ft_putstr(s);
	else
		i = write(1, "(null)", 6);
	return (i);
}

int	ft_putnumber(int n)
{
	ft_putnbr_fd(n, 1);
	return (n);
}

int	ft_unsignedint(unsigned int n)
{
	ft_unputnbr_fd(n, 1);
	return (n);
}

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
