/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:24:16 by jzhou             #+#    #+#             */
/*   Updated: 2021/08/23 17:02:10 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_game.h"

int		count_mapunit(char **argv)
{
	int fdnbr;
	int linenbr;
	char *str;

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
	int fdnbr;
	int linenbr;
	char *str;

	linenbr = count_mapunit(argv);
	fdnbr = open(argv[1], O_RDONLY);
	mygame->map = (char **)malloc(linenbr * sizeof(char *));
	linenbr = 0;
	while (1)
	{
		str = get_next_line(fdnbr);
		if (str == NULL)
			break;
		mygame->map[linenbr] = str;
		printf("%s", mygame->map[linenbr]);
		linenbr++;
	}
	close(fdnbr);
	mygame->img_height = linenbr;
	mygame->img_width = ft_strlen(mygame->map[0]) - 1;
}

void	ft_map_base(t_so_long *mygame)
{
	int iheight;
	int jwidth;

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
	int iheight;
	int jwidth;

	iheight = 0;
	jwidth = 0;
	while (iheight < mygame->img_height)
	{
		while (jwidth < mygame->img_width)
		{
			if (mygame->map[iheight][jwidth] == '1')
				ft_paintwall(jwidth, iheight, mygame);
			else if (mygame->map[iheight][jwidth] == 'P')
				ft_paintplayer(jwidth, iheight, mygame);
			else if (mygame->map[iheight][jwidth] == 'C')
				ft_paint_collect(jwidth, iheight, mygame);
			else if (mygame->map[iheight][jwidth] == 'E')
				ft_paintexit(jwidth, iheight, mygame);
			jwidth++;
		}
		iheight++;
		jwidth = 0;
	}
}

//void	ft_paint_bg(t_so_long *backg) //int x, int y,
//{
//	backg->mlx = mlx_init();
//	backg->window = mlx_new_window(backg->mlx, 1000, 800, "so long");
//	backg->relative_path = "./assets/BG.png";
//	backg->picture = mlx_png_file_to_image(backg->mlx, backg->relative_path, &backg->img_width, &backg->img_height);
//	mlx_put_image_to_window(backg->mlx, backg->window, backg->picture, 0, 0);
//}

int		main(int argc, char **argv)
{
	t_so_long	mygame;

	if (argc != 2)
		return (0);

	ft_memset(&mygame, 0, sizeof(t_so_long));

	ft_readmap(&mygame, argv);

	mygame.mlx = mlx_init();
	mygame.window = mlx_new_window(mygame.mlx, (mygame.img_width * 100), (mygame.img_height * 100), "so_long");

	//ft_readmap(&mygame, argv);
	//ft_paint_bg(&mygame);
	ft_map_base(&mygame);
	ft_paintmap(&mygame);
	mlx_loop(mygame.mlx);

	return (0);
}
