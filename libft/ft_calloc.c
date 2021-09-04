/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:53:22 by jzhou             #+#    #+#             */
/*   Updated: 2021/09/03 17:53:28 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*result;
	size_t	index;

	result = malloc(nitems * size);
	if (result == 0)
		return (0);
	index = 0;
	while (index < (nitems * size))
	{
		result[index] = '\0';
		index++;
	}
	return (result);
}
