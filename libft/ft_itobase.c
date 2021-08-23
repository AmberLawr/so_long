/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edavid <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 16:09:16 by jzhou             #+#    #+#             */
/*   Updated: 2021/08/14 11:47:49 by edavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc(unsigned long n, int base)
{
	int	index;

	index = 0;
	if (n == 0)
		index = 1;
	while (n > 0)
	{
		n = n / base;
		index ++;
	}
	return (index);
}

static char	*compare(unsigned long n, char *result, int base)
{
	int		len;

	len = calc(n, base);
	if (result == 0)
		return (0);
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		if (n % base > 9)
			result[--len] = (n % base) - 10 + 'a';
		else
			result[--len] = ((n % base) + '0');
		n = n / base;
	}
	return (result);
}

char	*ft_itobase(unsigned long n, int base)
{
	int		len;
	char	*result;

	len = calc(n, base);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == 0)
		return (0);
	result = compare(n, result, base);
	result[len] = '\0';
	return (result);
}
