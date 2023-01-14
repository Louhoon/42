/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/09 17:56:07 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/14 14:47:04 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

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

int	ft_printf(const char *s, ...)
{
	if (s != '\0')
		ft_putstr(s);
		return (0);
}

int main(void)
{	
	ft_printf("myprintf\n");
	printf("original\n");
	return (0);
}