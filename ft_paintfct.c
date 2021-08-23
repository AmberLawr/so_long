/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paintfct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:34:19 by jzhou             #+#    #+#             */
/*   Updated: 2021/08/23 16:55:09 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

//do these functions have to be 'static' ??

void	ft_paintwall(int x, int y, t_so_long *wall)
{
	wall->relative_path = "./assets/Wall.xpm";
	wall->picture = mlx_xpm_file_to_image(wall->mlx, wall->relative_path, &wall->i, &wall->j);
	mlx_put_image_to_window(wall->mlx, wall->window, wall->picture, x * 100, y * 100);
}

void	ft_paintpath(int x, int y, t_so_long *path)
{
	path->relative_path = "./assets/Path.xpm";
	path->picture = mlx_xpm_file_to_image(path->mlx, path->relative_path, &path->i, &path->j);
	mlx_put_image_to_window(path->mlx, path->window, path->picture, x * 100, y * 100);
}

void	ft_paintplayer(int x, int y, t_so_long *playerimg)
{
	playerimg->relative_path = "./assets/Player1.xpm";
	playerimg->picture = mlx_xpm_file_to_image(playerimg->mlx, playerimg->relative_path, &playerimg->i, &playerimg->j);
	mlx_put_image_to_window(playerimg->mlx, playerimg->window, playerimg->picture, x * 100, y * 100);
}

void	ft_paint_collect(int x, int y, t_so_long *collect)
{
	collect->relative_path = "./assets/Collect.xpm";
	collect->picture = mlx_xpm_file_to_image(collect->mlx, collect->relative_path, &collect->i, &collect->j);
	mlx_put_image_to_window(collect->mlx, collect->window, collect->picture, x * 100, y * 100);
}

void	ft_paintexit(int x, int y, t_so_long *exitus)
{
	exitus->relative_path = "./assets/Exit.xpm";
	exitus->picture = mlx_xpm_file_to_image(exitus->mlx, exitus->relative_path, &exitus->i, &exitus->j);
	mlx_put_image_to_window(exitus->mlx, exitus->window, exitus->picture, x * 100, y * 100);
}
