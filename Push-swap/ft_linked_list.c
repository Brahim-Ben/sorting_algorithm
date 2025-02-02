/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:36:59 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/31 09:46:41 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->index = -1;
	head->data = content;
	head->next = NULL;
	return (head);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

size_t	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

void	ft_put_in_node_part2(t_list **head_a, t_list **head_b)
{
	if (ft_check_sorting_nb(*head_a))
		return ;
	else if (ft_lstsize(*head_a) == 3 || ft_lstsize(*head_a) == 2)
		ft_ranking_three_numbers(head_a);
	else if (ft_lstsize(*head_a) == 4)
		ft_ranking_four(head_a, head_b);
	else if (ft_lstsize(*head_a) == 5)
		ft_ranking_five(head_a, head_b);
	else if (ft_lstsize(*head_a) > 5)
		ft_algoritem(head_a, head_b);
}
