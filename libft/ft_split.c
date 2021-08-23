/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:47:00 by jzhou             #+#    #+#             */
/*   Updated: 2021/07/01 11:21:05 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	words_count(char const *s, char c, int index);
static char	**result_create(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;

	count = 0;
	if (s == 0)
		return (0);
	while (s[count] && s[count] == c)
		count++;
	if (s[0] == '\0' || words_count(s, c, 0) < 1 || count >= ft_strlen(s))
	{
		result = malloc (sizeof(char *));
		result[0] = NULL;
		return (result);
	}
	result = result_create(s, c);
	return (result);
}

static int	words_count(char const *s, char c, int index)
{
	if (s == 0)
		return (0);
	while (s[index] == c)
		index++;
	while (s[index] != c && s[index] != '\0')
		index++;
	if (s[index] == '\0')
	{
		if (s[index - 1] == c)
			return (0);
		else
			return (1);
	}
	return (words_count(s, c, index) + 1);
}

static char	**result_create(char const *s, char c)
{
	char	**result;
	int		index;
	int		wbegin;
	int		wend;

	if (s == 0)
		return (0);
	result = (char **)malloc((words_count(s, c, 0) + 1) * sizeof(char *));
	if (result == 0)
		return (0);
	index = 0;
	wbegin = 0;
	wend = 0;
	while (index < words_count(s, c, 0) && s[wend] != '\0')
	{
		while (s[wend] == c)
			wend++;
		wbegin = wend;
		while (s[wend] != '\0' && s[wend] != c)
			wend++;
		result[index] = ft_substr(s, wbegin, wend - wbegin);
		index++;
	}
	result[index] = 0;
	return (result);
}
