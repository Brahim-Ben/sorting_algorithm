/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorting_nb_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:40:50 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/22 17:16:26 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_check_sorting_nb(t_list *head_a)
{
	if (head_a == NULL)
		return (0);
	while (head_a->next != NULL)
	{
		if (head_a->data > head_a->next->data)
			return (0);
		head_a = head_a->next;
	}
	return (1);
}
