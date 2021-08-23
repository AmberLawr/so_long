/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:56:26 by jzhou             #+#    #+#             */
/*   Updated: 2021/06/29 09:53:54 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		index;
	t_list	*temp;

	index = 1;
	temp = lst;
	if (lst == 0)
		return (0);
	while (temp->next != 0)
	{
		temp = temp->next;
		index++;
	}
	return (index);
}
