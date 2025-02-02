/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:34:51 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/24 08:33:55 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **head_a, int n)
{
	t_list	*head;
	t_list	*head2;

	if (ft_lstsize(*head_a) < 2)
		return ;
	head = (*head_a);
	head2 = (*head_a);
	(*head_a) = (*head_a)->next;
	head = ft_lstlast(head);
	head2->next = NULL;
	head->next = head2;
	if (n)
		write(1, "ra\n", 3);
}

void	ft_rb(t_list **head_b, int n)
{
	t_list	*head;
	t_list	*head2;

	if (ft_lstsize(*head_b) < 2)
		return ;
	head = (*head_b);
	head2 = (*head_b);
	(*head_b) = (*head_b)->next;
	head = ft_lstlast(head);
	head2->next = NULL;
	head->next = head2;
	if (n)
		write(1, "rb\n", 3);
}

void	ft_rr(t_list **head_a, t_list **head_b, int n)
{
	ft_ra(head_a, n);
	ft_rb(head_b, n);
	if (n == 0)
		write(1, "rr\n", 3);
}
