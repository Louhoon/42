/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/09 17:56:07 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/20 11:26:47 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_format(va_list args, const char str)
{
	int len;
	
	len = 0;
	while (len)
	{
		if (str == 's')
			len = len + ft_printstr(va_arg(args, char *));
		len++;
	}
}


int	ft_printf(const char *s, ...)
{
	int j;
	int len;
	va_list args;
	va_start(args, s);

	j = 0;
	len = ft_strlen(s);
	while (s[j])
	{
		if (s[j] == '%')
			ft_format(args, s[j + 1]);
		else
			ft_printstr(s);
		j++;
	}
	va_end(args);
	return (len);
}

int main(void)
{	
	ft_printf("hello\n");
	//printf("hello\n");
	return (0);
}