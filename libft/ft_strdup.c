/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:25:46 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/14 19:23:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		s1_size;
	char	*dupstring;

	i = 0;
	s1_size = ft_strlen(s1);
	dupstring = ((char *)malloc(sizeof(s1[i]) * (s1_size + 1)));
	if (dupstring == NULL)
		return (NULL);
	while (s1[i])
	{
		dupstring[i] = s1[i];
		i++;
	}
	dupstring[i] = '\0';
	return (dupstring);
}

// int main(void)
// {
// 	char original[12] = "Ooga Booga!";
//     char *duplicate;
//     int o_len,d_len;

//     duplicate = ft_strdup(original);
//     o_len = strlen(original);
//     d_len = strlen(duplicate);

//     printf("Original String: '%s' (%d)\n",
//             original,o_len);
//     printf("Duplicate string: '%s' (%d)\n",
//             duplicate,d_len);

//     return(0);
// }