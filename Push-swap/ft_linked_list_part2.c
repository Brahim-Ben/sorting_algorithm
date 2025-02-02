/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list_part2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:45:50 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/27 09:31:22 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_in_node(int *b, int c)
{
	t_list	*head_a;
	t_list	*head_b;
	t_list	*new;
	int		l;

	head_a = NULL;
	head_b = NULL;
	new = NULL;
	l = 0;
	while (l < c)
	{
		new = ft_lstnew(*b);
		if (!new)
		{
			write(2, "Error\n", 6);
			return ;
		}
		ft_lstadd_back(&head_a, new);
		b++;
		l++;
	}
	ft_put_in_node_part2(&head_a, &head_b);
	ft_clear(&head_a);
}
