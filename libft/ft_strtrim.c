/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:47:54 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/15 22:01:51 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s1 the string to be trimmed
// set the set of characters to trim
// allocate memory to the trimmed string
// return the trimmed string
// string should be trim in the beginning and end of string


// #include "libft.h"

static	int	check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

// char	*ft_strtrim(char const *s1, char const *set)
// {

// }