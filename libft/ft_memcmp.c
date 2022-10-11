/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:34:10 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/11 13:53:51 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (((unsigned char *) s1)[i] == ((unsigned char *) s2)[i] && i < n - 1)
		i++;
	return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
}

// int main(void)
// {
// 	printf("%d\n", ft_memcmp("", "df", 3));
// 	printf("%d\n", memcmp("", "df", 3));
// }