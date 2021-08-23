/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edavid <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:11:06 by jzhou             #+#    #+#             */
/*   Updated: 2021/08/14 16:48:21 by edavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	jindex;

	jindex = 0;
	if (dst == 0 || src == 0)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (jindex < (size - 1) && src[jindex] != '\0')
	{
		dst[jindex] = src[jindex];
		jindex++;
	}
	dst[jindex] = '\0';
	return (ft_strlen(src));
}
