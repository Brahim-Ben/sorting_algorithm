/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 09:31:11 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/31 09:17:41 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct node
{
	int			data;
	int			index;
	struct node	*next;
}	t_list;

void	ft_algoritem(t_list **head_a, t_list **head_b);
int		ft_atoi(char *str, int *errwor);
int		ft_check_sorting_nb(t_list *head_a);
void	ft_clear(t_list **head_a);
void	ft_indexing(t_list **head_a);
void	put_in_node(int *b, int c);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
size_t	ft_lstsize(t_list *lst);
void	ft_put_in_node_part2(t_list **head_a, t_list **head_b);
int		count_nb(int *n, int x, int p);
int		ft_check_double_number(int *b, int p);
int		chek_new_line(char *c);
void	ft_ranking_five(t_list **head_a, t_list **head_b);
void	ft_ranking_four(t_list **head_a, t_list **head_b);
void	ft_ranking_three_numbers(t_list **head_a);
void	ft_pb(t_list **head_a, t_list **head_b);
void	ft_pa(t_list **head_a, t_list **head_b);
void	ft_rra(t_list **head_a, int n);
void	ft_rrb(t_list **head_b, int n);
void	ft_rrr(t_list **head_a, t_list **head_b, int n);
void	ft_ra(t_list **head_a, int n);
void	ft_rb(t_list **head_b, int n);
void	ft_rr(t_list **head_a, t_list **head_b, int n);
void	ft_sa(t_list **head, int n);
void	ft_sb(t_list **head, int n);
void	ft_ss(t_list **head_a, t_list **head_b, int n);
char	**ft_split(char *s, char c);
int		ft_strlen(const char *s);
void	free_arr(char **arr);

#endif