/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 19:21:15 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/01/22 19:40:12 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"

int	main(void)
{	
	// char	*i;
	int		result;

	// i = "hi55";
	result = ft_printf(" %s\n", "ergewrg");
	result = printf(" %s\n", "ergewrg");
	ft_printf("num char = %d\n", result);
	printf("num char = %d\n", result);
}
