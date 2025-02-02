/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_with_number.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:07:37 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/24 18:52:22 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	exe(t_list **head_a, t_list **head_b, t_list2 **bb)
{
	if (!ft_strcmp((*bb)->data2, "sa\n"))
		ft_sa(head_a, 3);
	else if (!ft_strcmp((*bb)->data2, "sb\n"))
		ft_sb(head_b, 3);
	else if (!ft_strcmp((*bb)->data2, "ss\n"))
		ft_ss(head_a, head_b, 3);
	else if (!ft_strcmp((*bb)->data2, "ra\n"))
		ft_ra(head_a, 3);
	else if (!ft_strcmp((*bb)->data2, "rb\n"))
		ft_rb(head_b, 3);
	else if (!ft_strcmp((*bb)->data2, "rr\n"))
		ft_rr(head_a, head_b, 3);
	else if (!ft_strcmp((*bb)->data2, "rra\n"))
		ft_rra(head_a, 3);
	else if (!ft_strcmp((*bb)->data2, "rrb\n"))
		ft_rrb(head_b, 3);
	else if (!ft_strcmp((*bb)->data2, "rrr\n"))
		ft_rrr(head_a, head_b, 3);
	else if (!ft_strcmp((*bb)->data2, "pa\n"))
		ft_pa(head_a, head_b, 3);
	else if (!ft_strcmp((*bb)->data2, "pb\n"))
		ft_pb(head_a, head_b, 3);
}

void	ft_algo_with_number(t_list **head_a, t_list **head_b, t_list2 **bb)
{
	t_list2	*ss;

	ss = NULL;
	ss = (*bb);
	while (ss)
	{
		exe(head_a, head_b, &ss);
		ss = ss->next2;
	}
}
