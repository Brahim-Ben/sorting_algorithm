/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorting_nb.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:06:01 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/22 17:17:37 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sorting_nb(t_list *head_a)
{
	while (head_a->next != NULL)
	{
		if (head_a->data > head_a->next->data)
			return (0);
		head_a = head_a->next;
	}
	return (1);
}
