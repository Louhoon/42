/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 03:12:36 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/24 04:57:43 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
