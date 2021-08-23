/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:50:58 by jzhou             #+#    #+#             */
/*   Updated: 2021/08/23 16:54:40 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_GAME_H
# define FT_GAME_H

# include "minilibx/mlx.h"
# include "./libft/libft.h"
# include <unistd.h>
# include <fcntl.h>


	typedef struct s_so_long
	{
		char	**map;
		void	*mlx;
		void	*window;
		//void	*image;
		void	*picture;
		char	*addr;
		int		img_width;
		int		img_height;
		char	*relative_path;
		//int		bitsperpix;
		//int		line_length;
		//int		endian;
		int		i;
		int		j;
	}	t_so_long;

	void	ft_paintwall(int x, int y, t_so_long *wall);
	void	ft_paintpath(int x, int y, t_so_long *path);
	void	ft_paintplayer(int x, int y, t_so_long *playerimg);
	void	ft_paint_collect(int x, int y, t_so_long *collect);
	void	ft_paintexit(int x, int y, t_so_long *exitus);


# endif
