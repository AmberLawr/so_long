/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:12:50 by jzhou             #+#    #+#             */
/*   Updated: 2021/06/30 13:57:18 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_within_set(char const s, char const *set)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s)
			counter++;
		i++;
	}
	return (counter);
}

static size_t	s1_rightdel(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1);
	while (i > 0)
	{
		if (is_within_set(s1[i - 1], set) == 0)
			return (i);
		i--;
	}
	return (0);
}

static size_t	s1_leftdel(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (is_within_set(s1[i], set) == 0)
			return (i);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	leftdel;
	size_t	rightdel;
	size_t	length;
	size_t	index;
	char	*result;

	if (s1 == 0 || set == 0)
		return (0);
	leftdel = s1_leftdel(s1, set);
	rightdel = s1_rightdel(s1, set);
	length = rightdel - leftdel;
	result = (char *)malloc((length + 1) * sizeof(char));
	if (result == 0)
		return (0);
	index = 0;
	while (index < length)
	{
		result[index] = s1[leftdel + index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
