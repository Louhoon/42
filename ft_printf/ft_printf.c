/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/09 17:56:07 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/22 18:50:18 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_format(va_list args, const char str)
{
	int	len;

	len = 0;
	if (str == 's')
		len = len + ft_printstr(va_arg(args, char *));
	else if (str == 'c')
		len = len + ft_print_char(va_arg(args, int));
	else if (str == 'd')
		len = len + ft_putnumber(va_arg(args, int));
	else if (str == 'i')
		len = len + ft_putnumber(va_arg(args, int));
	else if (str == 'u')
		len = len + ft_unsignedint(va_arg(args, unsigned int));
	else if (str == 'x')
		len = len + ft_print_hexa(va_arg(args, unsigned int));
	else if (str == 'X')
		len = len + ft_print_uphexa(va_arg(args, unsigned int));
	else if (str == 'p')
		len = len + ft_print_ptr(va_arg(args, void *));
	else if (str == '%')
		len = len + ft_print_char('%');
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		j;
	int		len;
	va_list	args;

	va_start(args, s);
	j = 0;
	len = 0;
	while (s[j])
	{
		if (s[j] == '%')
		{
			len = len + ft_format(args, s[j + 1]);
			j++;
		}
		else
			len = len + ft_print_char(s[j]);
		j++;
	}
	va_end(args);
	return (len);
}
