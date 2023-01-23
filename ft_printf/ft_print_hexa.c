/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_hexa.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/22 11:52:21 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/23 16:30:32 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int	ft_print_hexa(unsigned int n)
{
	char	*hex_digits;
	char	hex[50];
	int		i;
	int		j;

	hex_digits = "0123456789abcdef";
	i = 0;
	if (n == 0)
		return (write(1, "0", 1), 1);
	while (n > 0)
	{
		hex[i++] = hex_digits[n % 16];
		n = n / 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		write(1, &hex[j], 1);
		j--;
	}
	return (i);
}

int	ft_print_uphexa(unsigned int n)
{
	char	*hex_digits;
	char	hex[50];
	int		i;
	int		j;

	hex_digits = "0123456789ABCDEF";
	i = 0;
	if (n == 0)
		return (write(1, "0", 1), 1);
	while (n > 0)
	{
		hex[i++] = hex_digits[n % 16];
		n = n / 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		write(1, &hex[j], 1);
		j--;
	}
	return (i);
}

int	ft_print_ptr(unsigned long long pointer)
{
	char				*hex_digits;
	char				hex[50];
	int					i;
	int					j;

	hex_digits = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	if (pointer == 0)
		return (write(1, "0", 1), 3);
	while (pointer > 0)
	{
		hex[i++] = hex_digits[pointer % 16];
		pointer = pointer / 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		write(1, &hex[j], 1);
		j--;
	}
	return (i + 2);
}
