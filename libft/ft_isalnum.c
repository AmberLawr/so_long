/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:57:33 by jzhou             #+#    #+#             */
/*   Updated: 2021/06/25 20:24:03 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
int	ft_isalnum(int argument)
{
	if (argument >= 65 && argument <= 90)
		return (1);
	else if (argument >= 97 && argument <= 122)
		return (1);
	else if (argument >= 48 && argument <= 57 )
		return (1);
	else
		return (0);
}
