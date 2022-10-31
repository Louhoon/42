/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:18:48 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 15:18:50 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return (&((char *) s)[i]);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char s[] = "hello daenanang fgnsfgn";
// 	char c = '\0';
// 	printf("%s\n", ft_strrchr(s, c));
// 	printf("%s\n", strrchr(s, c));
// }