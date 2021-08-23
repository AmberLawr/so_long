/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:08:29 by jzhou             #+#    #+#             */
/*   Updated: 2021/06/28 08:48:20 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	size_t			index;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		if (s1[index] == c1)
			return (&s1[index]);
		index++;
	}
	return (0);
}
