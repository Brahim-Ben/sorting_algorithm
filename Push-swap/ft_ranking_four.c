/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ranking_four.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 07:38:01 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/24 08:27:39 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_about_four(int position, t_list **head_a, t_list **head_b)
{
	if (position == 1)
	{
		ft_sa(head_a, 1);
		ft_pb(head_a, head_b);
	}
	else if (position == 2)
	{
		ft_rra(head_a, 1);
		ft_rra(head_a, 1);
		ft_pb(head_a, head_b);
	}
	else if (position == 3)
	{
		ft_rra(head_a, 1);
		ft_pb(head_a, head_b);
	}
	else if (position == 0)
		ft_pb(head_a, head_b);
	ft_ranking_three_numbers(head_a);
	ft_pa(head_a, head_b);
}

void	ft_ranking_four(t_list **head_a, t_list **head_b)
{
	int		position;
	t_list	*cup;

	ft_indexing(head_a);
	position = 0;
	cup = (*head_a);
	while (cup->index != 0)
	{
		position++;
		cup = cup->next;
	}
	ft_about_four(position, head_a, head_b);
}
