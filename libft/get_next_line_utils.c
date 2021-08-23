/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:01:05 by jzhou             #+#    #+#             */
/*   Updated: 2021/08/23 09:35:40 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_eof(char **line, char **buf)
{
	*line = *buf;
	*buf = NULL;
	return (*line);
}

//char	*ft_strdup(const char *s)
//{
//	int		index;
//	int		length;
//	char	*target;

//	if (!s)
//		return (0);
//	index = 0;
//	length = ft_strlen(s);
//	target = (char *)malloc((length + 1) * sizeof(char));
//	if (target == 0)
//		return (0);
//	while (index < length)
//	{
//		target[index] = s[index];
//		index++;
//	}
//	target[index] = '\0';
//	return (target);
//}

//char	*ft_substr(char const *s, unsigned int start, size_t len)
//{
//	size_t	index;
//	char	*sub;

//	index = 0;
//	if (s == 0)
//		return (0);
//	sub = (char *)malloc((len + 1) * sizeof(char));
//	if (sub == 0)
//		return (0);
//	if (start >= ft_strlen(s))
//	{
//		sub[0] = '\0';
//		return (sub);
//	}
//	while (index < len)
//	{
//		sub[index] = s[start + index];
//		index++;
//	}
//	sub[index] = '\0';
//	return (sub);
//}

//char	*ft_strjoin(char const *s1, char const *s2)
//{
//	size_t	index;
//	size_t	jindex;
//	size_t	length;
//	char	*newstr;

//	if (s1 == 0 || s2 == 0)
//		return (0);
//	index = 0;
//	jindex = 0;
//	length = ft_strlen(s1) + ft_strlen(s2);
//	newstr = (char *)malloc((length + 1) * sizeof(char));
//	if (newstr == 0)
//		return (0);
//	while (s1[index] != '\0')
//	{
//		newstr[index] = s1[index];
//		index++;
//	}
//	while (s2[jindex] != '\0')
//	{
//		newstr[index + jindex] = s2[jindex];
//		jindex++;
//	}
//	newstr[index + jindex] = '\0';
//	return (newstr);
//}

//size_t	ft_strlen(const char *s)
//{
//	int	index;

//	index = 0;
//	while (s[index] != '\0')
//		index++;
//	return (index);
//}
