/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:32:24 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/31 09:16:28 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "checker.h"

char	*get_next_line(int fd);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*find_new_line(char *s);
void	ft_strcat(char *dest, char *src);

#endif
