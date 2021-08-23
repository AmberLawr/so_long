/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:10:01 by jzhou             #+#    #+#             */
/*   Updated: 2021/06/27 11:39:02 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		index;
	char	*s1;

	index = 0;
	s1 = (char *)str;
	while (s1[index] != c && s1[index] != '\0')
	{
		index++;
	}
	if (s1[index] == c)
		return (&s1[index]);
	else
		return (0);
}
