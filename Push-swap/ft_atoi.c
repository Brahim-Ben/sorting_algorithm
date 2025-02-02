/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:58:17 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/27 09:46:17 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str, int *errwor)
{
	long		result;
	int			sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if ((sign == 1 && result > INT_MAX) || result * sign < INT_MIN)
		{
			write(2, "Error\n", 6);
			*errwor = 1;
			return (0);
		}
		str++;
	}
	*errwor = 0;
	return (result * sign);
}
