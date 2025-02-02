/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 09:19:37 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/23 12:11:06 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_indexing(t_list **head_a)
{
	int		i;
	t_list	*com;
	t_list	*com2;

	i = 0;
	com = (*head_a);
	while (com != NULL)
	{
		i = 0;
		com2 = (*head_a);
		while (com2 != NULL)
		{
			if (com->data > com2->data)
				i++;
			com2 = com2->next;
		}
		com->index = i;
		com = com->next;
	}
}
