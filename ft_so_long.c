/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:24:16 by jzhou             #+#    #+#             */
/*   Updated: 2021/09/03 12:27:33 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_game.h"

int	count_mapunit(char **argv)
{
	int		fdnbr;
	int		linenbr;
	char	*str;

	fdnbr = open(argv[1], O_RDONLY);
	linenbr = 0;
	while (1)
	{
		str = get_next_line(fdnbr);
		if (str == NULL)
			break ;
		free (str);
		linenbr++;
	}
	close(fdnbr);
	return (linenbr);
}

void	ft_readmap(t_so_long *mygame, char **argv)
{
	int		fdnbr;
	int		linenbr;
	char	*str;

	linenbr = count_mapunit(argv);
	fdnbr = open(argv[1], O_RDONLY);
	mygame->map.map = (char **)malloc(linenbr * sizeof(char *));
	linenbr = 0;
	while (1)
	{
		str = get_next_line(fdnbr);
		if (str == NULL)
			break ;
		mygame->map.map[linenbr] = str;
		linenbr++;
	}
	close(fdnbr);
	mygame->img_height = linenbr;
	mygame->img_width = ft_strlen(mygame->map.map[0]);
}

void	ft_map_base(t_so_long *mygame)
{
	int	iheight;
	int	jwidth;

	iheight = 0;
	jwidth = 0;
	while (iheight < mygame->img_height)
	{
		while (jwidth < mygame->img_width)
		{
			ft_paintpath(jwidth, iheight, mygame);
			jwidth++;
		}
		iheight++;
		jwidth = 0;
	}
}

void	ft_paintmap(t_so_long *mygame)
{
	int	iheight;
	int	jwidth;

	iheight = 0;
	jwidth = 0;
	while (iheight < mygame->img_height)
	{
		while (jwidth < mygame->img_width)
		{
			if (mygame->map.map[iheight][jwidth] == '1')
				ft_paintwall(jwidth, iheight, mygame);
			else if (mygame->map.map[iheight][jwidth] == 'P')
				ft_setplayer(jwidth, iheight, mygame);
			else if (mygame->map.map[iheight][jwidth] == 'C')
				ft_setcollect(jwidth, iheight, mygame);
			else if (mygame->map.map[iheight][jwidth] == 'E')
				ft_paintexit(jwidth, iheight, mygame);
			jwidth++;
		}
		iheight++;
		jwidth = 0;
	}
}

int	main(int argc, char **argv)
{
	t_so_long	mygame;

	if (argc != 2)
		return (0);
	ft_memset(&mygame, 0, sizeof(t_so_long));
	ft_readmap(&mygame, argv);
	mygame.mlx = mlx_init();
	mygame.window = mlx_new_window(mygame.mlx, (mygame.img_width * 100),
			(mygame.img_height * 100), "so_long");
	ft_errors(&mygame);
	ft_init_img(&mygame);
	ft_map_base(&mygame);
	ft_paintmap(&mygame);
	mlx_hook(mygame.window, 2, (1L << 0), ft_playermove, &mygame);
	mlx_hook(mygame.window, 17, (1L << 17), ft_exitgame, &mygame);
	mlx_loop(mygame.mlx);
	return (0);
}
