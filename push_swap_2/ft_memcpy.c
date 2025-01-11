/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 11:28:53 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/11 11:30:36 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memcpy(void *dst, void *src)
{
	char		*d;
	const char	*s;

	if (dst == src)
		return (dst);
	s = (const char *) src;
	d = (char *) dst;
	if (d != NULL || s != NULL)
	{
		while (*s)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	return (dst);
}