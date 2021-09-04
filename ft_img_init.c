/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:41:59 by jzhou             #+#    #+#             */
/*   Updated: 2021/08/30 11:21:45 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

void	ft_init_img(t_so_long *mygame)
{
	mygame->rel_path_path = "./assets/Path.xpm";
	mygame->path = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_path,
			&mygame->i, &mygame->j);
	mygame->rel_path_wall = "./assets/Wall.xpm";
	mygame->wall = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_wall,
			&mygame->i, &mygame->j);
	mygame->rel_path_ply = "./assets/Player1.xpm";
	mygame->player = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_ply,
			&mygame->i, &mygame->j);
	mygame->rel_path_col = "./assets/Collect.xpm";
	mygame->collect = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_col,
			&mygame->i, &mygame->j);
	mygame->rel_path_exi = "./assets/Exit.xpm";
	mygame->exitus = mlx_xpm_file_to_image(mygame->mlx, mygame->rel_path_exi,
			&mygame->i, &mygame->j);
}

void	ft_setplayer(int jwidth, int iheight, t_so_long *mygame)
{
	mygame->myplayer.horizontal = jwidth;
	mygame->myplayer.vertical = iheight;
	ft_paintplayer(jwidth, iheight, mygame);
}

void	ft_setcollect(int jwidth, int iheight, t_so_long *mygame)
{
	mygame->colsum++;
	mygame->collectible++;
	ft_paint_collect(jwidth, iheight, mygame);
}
