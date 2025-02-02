/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:36:59 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/31 08:22:29 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
	if (!new)
		return ;
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

void	handle_sorting(t_list **head_a, t_list **head_b, t_list2 **bb)
{
	if (!ft_read_in(bb))
	{
		write(2, "Error\n", 6);
		return ;
	}
	else
		ft_algo_with_number(head_a, head_b, bb);
	if (*head_b != NULL)
	{
		ft_clear(head_b);
		write(1, "KO\n", 3);
	}
	else if (ft_check_sorting_nb(*head_a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
