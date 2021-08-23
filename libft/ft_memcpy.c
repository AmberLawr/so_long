/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:09:07 by jzhou             #+#    #+#             */
/*   Updated: 2021/06/28 08:48:49 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	size_t			index;

	index = 0;
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dst;
	if ((dst == 0) && (src == 0))
		return (0);
	while (index < n)
	{
		cdest[index] = csrc[index];
		index++;
	}
	return (cdest);
}
