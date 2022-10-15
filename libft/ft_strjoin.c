/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 09:03:11 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/15 17:29:02 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*joinstr;
	size_t	s1_len;
	size_t	s2_len;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joinstr = malloc(sizeof(s1[i]) * (s1_len + s2_len + 1));
	if (joinstr == NULL)
		return (NULL);
	while (s1[i])
	{
		joinstr[i] = s1[i];
		i++;
	}
	while (s2[j])
		joinstr[i++] = s2[j++];
	joinstr[i] = '\0';
	return (joinstr);
}

// int main(void)
// {
// 	char s1[20] = "hello";
// 	char s2[20] = "you";
// 	char *join;
// 	join = ft_strjoin(s1, s2);
// 	printf("%s\n", join);
// 	//system("leaks a.out");
// }
