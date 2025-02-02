/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ranking_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 07:39:20 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/24 08:26:07 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_about_five_two(int position, t_list **head_a, t_list **head_b)
{
	if (position == 3)
	{
		ft_rra(head_a, 1);
		ft_rra(head_a, 1);
		ft_pb(head_a, head_b);
	}
	else if (position == 4)
	{
		ft_rra(head_a, 1);
		ft_pb(head_a, head_b);
	}
	else if (position == 0)
		ft_pb(head_a, head_b);
	ft_ranking_four(head_a, head_b);
	ft_pa(head_a, head_b);
}

static void	ft_about_five(int position, t_list **head_a, t_list **head_b)
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
		ft_rra(head_a, 1);
		ft_pb(head_a, head_b);
	}
	ft_about_five_two(position, head_a, head_b);
}

void	ft_ranking_five(t_list **head_a, t_list **head_b)
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
	ft_about_five(position, head_a, head_b);
}
