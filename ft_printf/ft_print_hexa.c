/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_hexa.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/22 11:52:21 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/22 17:19:02 by lvoisin-      ########   odam.nl         */
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
		write(1, "0", 1);
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
		write(1, "0", 1);
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

int	ft_print_ptr(void *pointer)
{
	char	*hex_digits;
	char	hex[sizeof(void *) * 2 + 1];
	unsigned long address;
	int		i;
	int		j;

	hex_digits = "0123456789abcdef";
	address = (unsigned long)pointer;
	i = 0;
	while ((unsigned long)pointer > 0)
	{
		hex[i++] = hex_digits[address % 16];
		address = address / 16;
	}
	write(1, "0x", 2);
	j = i - 1;
	while (j >= 0)
	{
		write(1, &hex[j], 1);
		j--;
	}
	return (i);
}
