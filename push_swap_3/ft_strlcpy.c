/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 10:26:11 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/12 10:26:23 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	y;
	size_t	count;

	y = 0;
	i = 0;
	count = ft_strlen(src);
	if (dstsize == 0)
		return (count);
	while (src[i] != '\0' && y < dstsize - 1)
	{
		dst[y] = src[i];
		i++;
		y++;
	}
	dst[y] = '\0';
	return (count);
}