/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ranking_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:01:05 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/24 08:30:56 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ranking_three_numbers(t_list **head_a)
{
	ft_indexing(head_a);
	if (ft_lstsize(*head_a) == 2 && (*head_a)->index == 1)
		ft_sa(head_a, 1);
	else if ((*head_a)->index == 0 && (*head_a)->next->index == 2)
	{
		ft_sa(head_a, 1);
		ft_ra(head_a, 1);
	}
	else if ((*head_a)->index == 1 && (*head_a)->next->index == 2)
		ft_rra(head_a, 1);
	else if ((*head_a)->index == 1 && (*head_a)->next->index == 0)
		ft_sa(head_a, 1);
	else if ((*head_a)->index == 2 && (*head_a)->next->index == 1)
	{
		ft_sa(head_a, 1);
		ft_rra(head_a, 1);
	}
	else if ((*head_a)->index == 2 && (*head_a)->next->index == 0)
		ft_ra(head_a, 1);
}
