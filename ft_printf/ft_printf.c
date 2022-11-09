/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/09 17:56:07 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/11/09 19:01:37 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*ft_putstr(const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (s);
}


void ft_printf(const char *str, ...)
{
	va_list args;
	va_start(args, str);
	while(*str != '\0')
	{
		if(*str != '%')
		{
			ft_putstr(str);
		}
		str++;
	}
	va_end(args);
}

int main(void)
{
	ft_printf("hello world\n");
	return (0);
}