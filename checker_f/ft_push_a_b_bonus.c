/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a_b_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:00:42 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/24 18:24:31 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_pa(t_list **head_a, t_list **head_b, int n)
{
	t_list	*head1_b;

	if (ft_lstsize(*head_b) < 1)
		return ;
	head1_b = (*head_b);
	(*head_b) = (*head_b)->next;
	head1_b->next = NULL;
	head1_b->next = (*head_a);
	(*head_a) = head1_b;
	if (n == 1)
		write(1, "pa\n", 3);
}

void	ft_pb(t_list **head_a, t_list **head_b, int n)
{
	t_list	*head1_a;

	if (ft_lstsize(*head_a) < 1)
		return ;
	head1_a = (*head_a);
	(*head_a) = (*head_a)->next;
	head1_a->next = NULL;
	head1_a->next = (*head_b);
	(*head_b) = head1_a;
	if (n == 1)
		write(1, "pb\n", 3);
}
