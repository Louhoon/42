/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:54:19 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/10 22:43:12 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] && s2[i] && s1[i] == s2[i] && i < (int) n) - 1)
			i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

// #include "libft.h"

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t	i;

// 	if (n == 0)
// 		return (0);
// 	i = 0;
// 	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
// 		++i;
// 	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// }


// int main(void)
// {
// 	printf("%d\n", ft_strncmp("1234", "1235", 5));
// 	printf("%d\n", strncmp("1234", "1235", 5));
// }