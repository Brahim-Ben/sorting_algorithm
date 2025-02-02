/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list_part2_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:26:01 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/26 08:09:19 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	put_in_node(int *b, int c)
{
	t_list	*head_a;
	t_list	*head_b;
	t_list2	*bb;
	t_list	*new;
	int		l;

	head_a = NULL;
	head_b = NULL;
	bb = NULL;
	l = 0;
	while (l++ < c)
	{
		new = ft_lstnew(*b);
		ft_lstadd_back(&head_a, new);
		b++;
	}
	handle_sorting(&head_a, &head_b, &bb);
	ft_clear_list_two(&bb);
	ft_clear(&head_a);
}
