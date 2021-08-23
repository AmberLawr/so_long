/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:09:48 by jzhou             #+#    #+#             */
/*   Updated: 2021/06/30 09:36:53 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	sc;
	size_t			index;

	str1 = (unsigned char *)str;
	sc = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		str1[index] = sc;
		index++;
	}
	return (str1);
}
