/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:41:05 by jzhou             #+#    #+#             */
/*   Updated: 2021/06/25 20:24:38 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_isalpha(int argument)
{
	if (argument >= 65 && argument <= 90)
		return (1);
	else if (argument >= 97 && argument <= 122)
		return (2);
	else
		return (0);
}
