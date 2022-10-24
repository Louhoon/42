/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 20:15:29 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/24 04:35:26 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_memory;

	allocated_memory = malloc(count * size);
	if (allocated_memory == NULL)
		return (NULL);
	ft_bzero(allocated_memory, (count * size));
	return (allocated_memory);
}

// int     main(void)
// {
// 	char *dst;
// 	char *dst2;

// 	dst = calloc(SIZE_MAX, SIZE_MAX);
// 	dst2 = ft_calloc(SIZE_MAX, SIZE_MAX);
// 	printf("dst2 >> %s \n", dst2);
// 	printf("dst >> %s \n", dst);
// 	printf("================\n");
// 	system("leaks a.out");

// 	return (0);
// }
