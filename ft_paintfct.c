/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paintfct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:34:19 by jzhou             #+#    #+#             */
/*   Updated: 2021/08/29 14:24:12 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

void	ft_paintpath(int x, int y, t_so_long *mypath)
{
	mlx_put_image_to_window(mypath->mlx, mypath->window, mypath->path,
		x * 100, y * 100);
}

void	ft_paintwall(int x, int y, t_so_long *mywall)
{
	mlx_put_image_to_window(mywall->mlx, mywall->window, mywall->wall,
		x * 100, y * 100);
}

void	ft_paintplayer(int x, int y, t_so_long *myplayerimg)
{
	mlx_put_image_to_window(myplayerimg->mlx, myplayerimg->window,
		myplayerimg->player, x * 100, y * 100);
}

void	ft_paint_collect(int x, int y, t_so_long *mycollect)
{
	mlx_put_image_to_window(mycollect->mlx, mycollect->window,
		mycollect->collect, x * 100, y * 100);
}

void	ft_paintexit(int x, int y, t_so_long *myexitus)
{
	mlx_put_image_to_window(myexitus->mlx, myexitus->window, myexitus->exitus,
		x * 100, y * 100);
}
