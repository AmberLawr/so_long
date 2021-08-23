/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edavid <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:09:23 by jzhou             #+#    #+#             */
/*   Updated: 2021/08/14 16:48:57 by edavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dst;
	if ((cdest == 0) && (csrc == 0))
		return (0);
	if (csrc < cdest)
	{
		while (len > 0)
		{
			cdest[len - 1] = csrc[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(cdest, csrc, len);
	return (dst);
}
