/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 08:53:02 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/22 19:15:41 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(const char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		write(1, "(null)", 6);
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
