/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_utils.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 09:12:36 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/23 16:31:57 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	unnumlen(unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	numlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_printstr(const char *s)
{
	int	i;

	if (s != NULL)
		i = ft_putstr(s);
	else
		i = write(1, "(null)", 6);
	return (i);
}

int	ft_putnumber(int n)
{
	int	i;

	if (n == -2147483648)
		return (write (1, "-2147483648", 11), 11);
	i = numlen(n);
	if (n == 0)
		return (write(1, "0", 1), 1);
	ft_putnbr_fd(n, 1);
	return (i);
}

int	ft_unsignedint(unsigned int n)
{
	int	i;

	i = unnumlen(n);
	if (n == 0)
		return (write(1, "0", 1), 1);
	ft_unputnbr_fd(n, 1);
	return (i);
}
