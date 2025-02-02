/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 08:18:53 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/31 09:17:24 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>
# include "get_next_line.h"

typedef struct checker
{
	char			*data2;
	struct checker	*next2;
}	t_list2;

typedef struct node
{
	int			data;
	int			index;
	struct node	*next;
}	t_list;

t_list2	*ft_lstnew_bonus(char *content);
t_list2	*ft_lstlast_bonus(t_list2 *lst);
void	ft_lstadd_back_bonus(t_list2 **lst, t_list2 *new);
size_t	ft_lstsize_bonus(t_list2 *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
size_t	ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	put_in_node(int *b, int c);
void	ft_algo_with_number(t_list **head_a, t_list **head_b, t_list2 **bb);
int		ft_atoi(char *str, int *errwor);
int		ft_check_sorting_nb(t_list *head_a);
void	ft_clear(t_list **head_a);
void	ft_clear_list_two(t_list2 **bb);
void	ft_indexing(t_list **head_a);
void	handle_sorting(t_list **head_a, t_list **head_b, t_list2 **bb);
void	put_in_node_input(char *line, t_list2 **bb);
int		chek_new_line(char *c);
int		ft_check_double_number(int *b, int p);
int		count_nb(int *n, int x, int p);
void	ft_pa(t_list **head_a, t_list **head_b, int n);
void	ft_pb(t_list **head_a, t_list **head_b, int n);
void	ft_rra(t_list **head_a, int n);
void	ft_rrb(t_list **head_b, int n);
void	ft_rrr(t_list **head_a, t_list **head_b, int n);
void	ft_ra(t_list **head_a, int n);
void	ft_rb(t_list **head_b, int n);
void	ft_rr(t_list **head_a, t_list **head_b, int n);
char	**ft_split(char *s, char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(const char *s);
void	ft_sa(t_list **head, int n);
void	ft_sb(t_list **head, int n);
void	ft_ss(t_list **head_a, t_list **head_b, int n);
int		ft_read_in(t_list2 **b);
void	free_arr(char **arr);

#endif