/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a_b_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:17:11 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/23 17:46:03 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sa(t_list **head, int n)
{
	t_list	*head1;
	t_list	*head2;

	if (ft_lstsize(*head) < 2)
		return ;
	head1 = (*head);
	head2 = (*head)->next->next;
	(*head) = (*head)->next;
	(*head)->next = NULL;
	head1->next = NULL;
	(*head)->next = head1;
	head1->next = head2;
	if (n == 1)
		write(1, "sa\n", 3);
}

void	ft_sb(t_list **head, int n)
{
	t_list	*head1;
	t_list	*head2;

	if (ft_lstsize(*head) < 2)
		return ;
	head1 = (*head);
	head2 = (*head)->next->next;
	(*head) = (*head)->next;
	(*head)->next = NULL;
	head1->next = NULL;
	(*head)->next = head1;
	head1->next = head2;
	if (n == 1)
		write(1, "sb\n", 3);
}

void	ft_ss(t_list **head_a, t_list **head_b, int n)
{
	ft_sa(head_a, n);
	ft_sb(head_b, n);
	if (n == 0)
		write(1, "ss\n", 3);
}
