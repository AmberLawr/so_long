/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzhou <jzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:07:49 by jzhou             #+#    #+#             */
/*   Updated: 2021/07/01 13:16:12 by jzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp1;
	t_list	*temp2;

	temp1 = *lst;
	if (*lst == 0 || del == 0)
		return ;
	while (temp1->next != 0)
	{
		temp2 = temp1->next;
		ft_lstdelone(temp1, del);
		temp1 = temp2;
	}
	ft_lstdelone(temp1, del);
	*lst = 0;
	return ;
}
