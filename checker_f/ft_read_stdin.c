/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:44:05 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/26 17:33:35 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	ft_check_line(char *str, t_list2 **bb)
{
	if (!ft_strcmp("sa\n", str))
		put_in_node_input(str, bb);
	else if (!ft_strcmp("sb\n", str))
		put_in_node_input(str, bb);
	else if (!ft_strcmp("ss\n", str))
		put_in_node_input(str, bb);
	else if (!ft_strcmp("ra\n", str))
		put_in_node_input(str, bb);
	else if (!ft_strcmp("rb\n", str))
		put_in_node_input(str, bb);
	else if (!ft_strcmp("rr\n", str))
		put_in_node_input(str, bb);
	else if (!ft_strcmp("rra\n", str))
		put_in_node_input(str, bb);
	else if (!ft_strcmp("rrb\n", str))
		put_in_node_input(str, bb);
	else if (!ft_strcmp("rrr\n", str))
		put_in_node_input(str, bb);
	else if (!ft_strcmp("pa\n", str))
		put_in_node_input(str, bb);
	else if (!ft_strcmp("pb\n", str))
		put_in_node_input(str, bb);
	else
		return (1);
	return (0);
}

int	ft_read_in(t_list2 **bb)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (ft_check_line(line, bb))
		{
			free(line);
			return (0);
		}
		line = get_next_line(0);
	}
	return (1);
}
