/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:18:22 by jzhou             #+#    #+#             */
/*   Updated: 2021/06/29 09:57:09 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (new == 0)
		return ;
	if (temp == 0)
	{
		*lst = new;
		return ;
	}
	while ((*temp).next != 0)
		temp = (*temp).next;
	(*temp).next = new;
}
