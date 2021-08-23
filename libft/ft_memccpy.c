/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:08:13 by jzhou             #+#    #+#             */
/*   Updated: 2021/07/01 10:48:03 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	size_t			index;

	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dst;
	index = 0;
	while (n)
	{
		cdest[index] = csrc[index];
		if (csrc[index] == (unsigned char)c)
			break ;
		index++;
		n--;
	}
	if (n)
		return (&cdest[index + 1]);
	return (0);
}
