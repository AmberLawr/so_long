/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collectexit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:50:07 by jzhou             #+#    #+#             */
/*   Updated: 2021/09/03 12:33:02 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

void	ft_countcol(t_so_long *mygame)
{
	int	screencol;

	mygame->collectible--;
	screencol = mygame->colsum - mygame->collectible;
}

void	ft_checkcol(t_so_long *mygame)
{
	if (mygame->collectible == 0)
	{
		exit (0);
	}
}
