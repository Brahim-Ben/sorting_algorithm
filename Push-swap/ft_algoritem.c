/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algoritem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:57:24 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/31 09:41:28 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_the_size_of_list(t_list **head_a)
{
	int	count;

	count = 0;
	if (ft_lstsize(*head_a) <= 100)
		count = 16;
	else if (ft_lstsize(*head_a) > 100)
		count = 33;
	return (count);
}

static int	ft_chek_tow(t_list *head)
{
	int	count;
	int	espas;

	count = 0;
	while (head && head->next)
	{
		espas = head->index - head->next->index;
		if (espas == 2 || espas == 3 || espas == 4)
			count++;
		head = head->next;
	}
	if (count >= 15 && count < 499)
		return (1);
	return (0);
}

static int	ft_algo2(t_list *head_b)
{
	t_list	*cup;
	int		max;
	int		position;

	position = 0;
	max = INT_MIN;
	cup = head_b;
	while (head_b)
	{
		if (head_b->data >= max)
			max = head_b->data;
		head_b = head_b->next;
	}
	while (cup->data != max)
	{
		position++;
		cup = cup->next;
	}
	return (position);
}

static void	ft_algo3(t_list **head_a, t_list **head_b)
{
	int	size;
	int	pos;

	size = ft_lstsize(*head_b);
	while (size)
	{
		pos = ft_algo2(*head_b);
		if (pos < size / 2)
		{
			while (pos--)
				ft_rb(head_b, 1);
		}
		else
		{
			while (pos < size)
			{
				ft_rrb(head_b, 1);
				pos++;
			}
		}
		ft_pa(head_a, head_b);
		size--;
	}
}

void	ft_algoritem(t_list **head_a, t_list **head_b)
{
	int	i;
	int	range;

	i = 0;
	ft_indexing(head_a);
	range = ft_check_the_size_of_list(head_a);
	while ((*head_a) != NULL)
	{
		if ((*head_a)->index <= i)
		{
			ft_pb(head_a, head_b);
			i++;
		}
		else if ((*head_a)->index <= (i + range))
		{
			ft_pb(head_a, head_b);
			ft_rb(head_b, 1);
			i++;
		}
		else if (ft_chek_tow(*head_a))
			ft_rra(head_a, 1);
		else
			ft_ra(head_a, 1);
	}
	ft_algo3(head_a, head_b);
}
