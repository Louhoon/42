/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 13:26:21 by lvoisin-      #+#    #+#                 */
/*   Updated: 2023/03/11 17:40:32 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MLX42/include/MLX42/MLX42.h"

int main(void)
{
	void	*mlx_ptr;
	void	*image;

	mlx_ptr = mlx_init(500, 500, "game", true);
	image = mlx_new_image(mlx_ptr, 150, 150);
	mlx_loop(mlx_ptr);
}