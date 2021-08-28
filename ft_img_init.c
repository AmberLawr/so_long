/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:41:59 by jzhou             #+#    #+#             */
/*   Updated: 2021/08/25 09:31:47 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

void	ft_init_img(t_so_long *mygame)
{
	mygame->rel_path_path = "./assets/Path.xpm";
	mygame->path = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_path, &mygame->i, &mygame->j);

	mygame->rel_path_wall = "./assets/Wall.xpm";
	mygame->wall = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_wall, &mygame->i, &mygame->j);

	mygame->rel_path_ply = "./assets/Player1.xpm";
	mygame->player = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_ply, &mygame->i, &mygame->j);

	mygame->rel_path_col = "./assets/Collect.xpm";
	mygame->collect = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_col, &mygame->i, &mygame->j);

	mygame->rel_path_exi = "./assets/Exit.xpm";
	mygame->exitus = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_exi, &mygame->i, &mygame->j);
}
