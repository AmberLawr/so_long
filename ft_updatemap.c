/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_updatemap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 12:39:21 by jzhou             #+#    #+#             */
/*   Updated: 2021/08/29 14:22:05 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"
#include <stdio.h>

void	ft_updatemap(int x, int y, t_so_long *mypath)
{
	int	y_next;
	int	x_next;

	y_next = mypath->myplayer.vertical;
	x_next = mypath->myplayer.horizontal;
	if (mypath->map.map[y][x] == 'E' || mypath->map.map[y][x] == 'G')
	{
		mypath->map.map[y][x] = 'E';
		mypath->map.map[y_next][x_next] = 'P';
	}
	else
	{
		mypath->map.map[y][x] = '0';
		if (mypath->map.map[y_next][x_next] == 'E')
			mypath->map.map[y_next][x_next] = 'G';
		else
			mypath->map.map[y_next][x_next] = 'P';
	}
}

void	ft_currentfield(int x, int y, t_so_long *mypath)
{
	int	y_next;
	int	x_next;

	y_next = mypath->myplayer.vertical;
	x_next = mypath->myplayer.horizontal;
	if (mypath->map.map[y][x] == 'E' || mypath->map.map[y][x] == 'G')
	{
		ft_paintexit(x, y, mypath);
		ft_paintplayer(x_next, y_next, mypath);
		ft_paintpath(x, y, mypath);
		ft_paintexit(x, y, mypath);
	}
	else
	{
		ft_paintpath(x, y, mypath);
		if (mypath->map.map[y_next][x_next] == 'E')
		{
			ft_paintpath(x, y, mypath);
			ft_paintexit(x, y, mypath);
		}
		else
			ft_paintplayer(x_next, y_next, mypath);
	}
}
