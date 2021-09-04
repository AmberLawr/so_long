/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errorsquare.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:15:47 by jzhou             #+#    #+#             */
/*   Updated: 2021/09/03 12:44:09 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

int	ft_checksquare(t_so_long *mygame)
{
	int	index;
	int	first_lwidth;

	first_lwidth = ft_strlen(mygame->map.map[0]);
	index = 1;
	while (index < mygame->img_height)
	{
		if ((int)ft_strlen(mygame->map.map[index]) != first_lwidth)
			return (-1);
		index++;
	}
	return (0);
}
