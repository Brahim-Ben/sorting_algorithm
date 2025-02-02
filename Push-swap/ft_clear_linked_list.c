/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_linked_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:08:09 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/22 17:19:29 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clear(t_list **head_a)
{
	t_list	*tmp;

	while ((*head_a))
	{
		tmp = (*head_a);
		(*head_a) = (*head_a)->next;
		tmp->next = NULL;
		free(tmp);
	}
}
