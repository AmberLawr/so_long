/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:06:54 by jzhou             #+#    #+#             */
/*   Updated: 2021/06/28 08:55:59 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	while (index >= 0)
	{
		if (str[index] == (char)c)
			return ((char *)(str + index));
		index--;
	}
	return (NULL);
}
