/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:41:50 by jzhou             #+#    #+#             */
/*   Updated: 2021/06/29 10:00:50 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	unsigned int	len;
	char			*result;

	if (s == 0)
		return (0);
	index = 0;
	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == 0)
		return (0);
	while (s[index] != '\0')
	{
		result[index] = (*f)(index, s[index]);
		index++;
	}
	result[index] = '\0';
	return (result);
}
