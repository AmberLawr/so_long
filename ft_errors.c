/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:50:45 by jzhou             #+#    #+#             */
/*   Updated: 2021/09/03 13:54:31 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

int	ft_checkmap_lu(t_so_long *mygame)
{
	int	iheight;
	int	jwidth;

	iheight = 0;
	jwidth = 0;
	while (iheight < mygame->img_height)
	{
		if (mygame->map.map[iheight][jwidth] != '1')
			return (-1);
		iheight++;
	}
	iheight = 0;
	jwidth = 0;
	while (jwidth < mygame->img_width)
	{
		if (mygame->map.map[iheight][jwidth] != '1')
			return (-1);
		jwidth++;
	}
	return (0);
}

int	ft_checkmap_rd(t_so_long *mygame)
{
	int	iheight;
	int	jwidth;

	iheight = 0;
	jwidth = mygame->img_width - 1;
	while (iheight < mygame->img_height)
	{
		if (mygame->map.map[iheight][jwidth] != '1')
			return (-1);
		iheight++;
	}
	iheight = mygame->img_height - 1;
	jwidth = 0;
	while (jwidth < mygame->img_width)
	{
		if (mygame->map.map[iheight][jwidth] != '1')
			return (-1);
		jwidth++;
	}
	return (0);
}

int	ft_checkmap_in(t_so_long *mygame)
{
	int		iheight;
	int		jwidth;
	char	c;

	iheight = 0;
	jwidth = 0;
	while (iheight < mygame->img_height)
	{
		while (jwidth < mygame->img_width)
		{
			c = mygame->map.map[iheight][jwidth];
			if (c != '0' && c != '1' && c != 'P' && c != 'C' && c != 'E')
				return (-1);
			jwidth++;
		}
		iheight++;
		jwidth = 0;
	}
	return (0);
}

int	ft_checkmin(t_so_long *mygame)
{
	int	iheight;
	int	jwidth;

	iheight = 0;
	jwidth = 0;
	while (iheight < mygame->img_height)
	{
		while (jwidth < mygame->img_width)
		{
			if (mygame->map.map[iheight][jwidth] == 'P')
				mygame->maperrors.plycount++;
			else if (mygame->map.map[iheight][jwidth] == 'C')
				mygame->maperrors.colcount++;
			else if (mygame->map.map[iheight][jwidth] == 'E')
				mygame->maperrors.extcount++;
			jwidth++;
		}
		iheight++;
		jwidth = 0;
	}
	if (mygame->maperrors.plycount < 1 || mygame->maperrors.colcount < 1
		|| mygame->maperrors.extcount < 1)
		return (-1);
	else
		return (0);
}

void	ft_errors(t_so_long *mygame)
{
	if (ft_checkmap_lu(mygame) == -1 || ft_checkmap_rd(mygame) == -1
		|| ft_checkmap_in(mygame) == -1 || ft_checkmin(mygame) == -1
		|| ft_checksquare(mygame) == -1)
	{
		printf("Error\n");
		printf("There are inconsistencies in your map!");
		exit (0);
	}
}
