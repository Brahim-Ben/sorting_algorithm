/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a_b.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 08:11:29 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/23 11:34:31 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **head_a, int n)
{
	t_list	*head1;
	t_list	*head2;

	if (ft_lstsize(*head_a) < 2)
		return ;
	head1 = (*head_a);
	while (head1->next->next != NULL)
		head1 = head1->next;
	head2 = ft_lstlast(*head_a);
	head1->next = NULL;
	head2->next = (*head_a);
	(*head_a) = head2;
	if (n)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_list **head_b, int n)
{
	t_list	*head1;
	t_list	*head2;

	if (ft_lstsize(*head_b) < 2)
		return ;
	head1 = (*head_b);
	while (head1->next->next != NULL)
		head1 = head1->next;
	head2 = ft_lstlast(*head_b);
	head1->next = NULL;
	head2->next = (*head_b);
	(*head_b) = head2;
	if (n)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **head_a, t_list **head_b, int n)
{
	ft_rra(head_a, n);
	ft_rrb(head_b, n);
	if (n == 0)
		write(1, "rrr\n", 4);
}
