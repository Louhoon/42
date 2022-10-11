/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:15:29 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/11 22:42:02 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_memory;

	allocated_memory = (void *) malloc(count * size);
		if (!allocated_memory)
			return (0);
	ft_bzero(allocated_memory, count * size);
	return (allocated_memory);
}
