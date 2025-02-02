/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_linked_list_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:08:09 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/22 17:18:59 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_clear(t_list **head_a)
{
	t_list	*tmp;

	tmp = NULL;
	while ((*head_a))
	{
		tmp = (*head_a);
		(*head_a) = (*head_a)->next;
		tmp->next = NULL;
		free(tmp);
	}
}

void	ft_clear_list_two(t_list2 **bb)
{
	t_list2	*tmp;

	tmp = NULL;
	while ((*bb))
	{
		tmp = (*bb);
		(*bb) = (*bb)->next2;
		tmp->next2 = NULL;
		free(tmp->data2);
		free(tmp);
	}
}
