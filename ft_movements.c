/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:33:26 by jzhou             #+#    #+#             */
/*   Updated: 2021/08/28 14:36:42 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"
#include <stdio.h>

int	ft_w(t_so_long *mygame)
{
	int iheight;
	int jwidth;

	iheight = mygame->myplayer.vertical;
	jwidth = mygame->myplayer.horizontal;
	if (mygame->map.map[iheight - 1][jwidth] == '0' || mygame->map.map[iheight - 1][jwidth] == 'C')
	{
		if (mygame->map.map[iheight - 1][jwidth] == 'C')
			ft_countcol(mygame);
		mygame->myplayer.vertical--;
		ft_updatemap(jwidth, iheight, mygame);
		ft_currentfield(jwidth, iheight, mygame);
	}
	if (mygame->map.map[iheight - 1][jwidth] == 'E')
	{
		mygame->myplayer.vertical--;
		ft_updatemap(jwidth, iheight, mygame);
		ft_currentfield(jwidth, iheight, mygame);
		ft_checkcol(mygame);
	}
	return (0);
}

int	ft_a(t_so_long *mygame)
{
	int iheight;
	int jwidth;

	iheight = mygame->myplayer.vertical;
	jwidth = mygame->myplayer.horizontal;

	if (mygame->map.map[iheight][jwidth - 1]  == '0' || mygame->map.map[iheight][jwidth - 1] == 'C')
	{
		if (mygame->map.map[iheight][jwidth - 1] == 'C')
			ft_countcol(mygame);
		mygame->myplayer.horizontal--;
		ft_updatemap(jwidth, iheight, mygame);
		ft_currentfield(jwidth, iheight, mygame);
	}
	if (mygame->map.map[iheight][jwidth - 1] == 'E')
	{
		mygame->myplayer.horizontal--;
		ft_updatemap(jwidth, iheight, mygame);
		ft_currentfield(jwidth, iheight, mygame);
		ft_checkcol(mygame);
	}
	return (0);
}

int	ft_s(t_so_long *mygame)
{
	int iheight;
	int jwidth;

	iheight = mygame->myplayer.vertical;
	jwidth = mygame->myplayer.horizontal;

	if (mygame->map.map[iheight + 1][jwidth] == '0' || mygame->map.map[iheight + 1][jwidth] == 'C')
	{
		if (mygame->map.map[iheight + 1][jwidth] == 'C')
			ft_countcol(mygame);
		mygame->myplayer.vertical++;
		ft_updatemap(jwidth, iheight, mygame);
		ft_currentfield(jwidth, iheight, mygame);
	}
	if (mygame->map.map[iheight + 1][jwidth] == 'E')
	{
		mygame->myplayer.vertical++;
		ft_updatemap(jwidth, iheight, mygame);
		ft_currentfield(jwidth, iheight, mygame);
		ft_checkcol(mygame);
	}
	return (0);
}

int	ft_d(t_so_long *mygame)
{
	int iheight;
	int jwidth;

	iheight = mygame->myplayer.vertical;
	jwidth = mygame->myplayer.horizontal;

	if (mygame->map.map[iheight][jwidth + 1] == '0' || mygame->map.map[iheight][jwidth + 1] == 'C')
	{
		if (mygame->map.map[iheight][jwidth + 1] == 'C')
			ft_countcol(mygame);
		mygame->myplayer.horizontal++;
		ft_updatemap(jwidth, iheight, mygame);
		ft_currentfield(jwidth, iheight, mygame);
	}
	if (mygame->map.map[iheight][jwidth + 1] == 'E')
	{
		mygame->myplayer.horizontal++;
		ft_updatemap(jwidth, iheight, mygame);
		ft_currentfield(jwidth, iheight, mygame);
		ft_checkcol(mygame);
	}
	return (0);
}

int	ft_playermove(int keycode, t_so_long *mygame)
{
	if (keycode == 13)
		ft_w(mygame);
	if (keycode == 0)
		ft_a(mygame);
	if (keycode == 1)
		ft_s(mygame);
	if (keycode == 2)
		ft_d(mygame);
	if (keycode == 53)
		ft_exitgame();
	return (0);
}
