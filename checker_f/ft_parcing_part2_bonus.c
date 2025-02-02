/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcing_part2_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:44:43 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/25 11:41:33 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	count_nb(int *n, int x, int p)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < p)
	{
		if (n[i] == x)
			count++;
		i++;
	}
	return (count);
}

int	ft_check_double_number(int *b, int p)
{
	int	x;

	x = 0;
	while (x < p)
	{
		if (count_nb(b, b[x], p) > 1)
			return (1);
		x++;
	}
	return (0);
}

int	chek_new_line(char *c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] != ' ')
			j++;
		i++;
	}
	if (j)
		return (0);
	return (1);
}
