/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_utils.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 09:12:36 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/20 11:05:37 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printstr(const char *s)
{
	if (s != NULL)
		ft_putstr(s);
	else
		write(1, "(null)", 1);
	return (0);
}