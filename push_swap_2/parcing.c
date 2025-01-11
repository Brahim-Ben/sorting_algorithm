/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:35:46 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/11 11:33:48 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_check_double_number(int *b)
{
    int *s;

    s = ft_memcpy(s, b);
    while(*b)
    {
        s = b;
        s++;
        while(*s)
        {
            if(*s == *b)
            {
                write(1, "Error\n", 6);
                exit(1);
            }
            s++;
        }
        b++;
    }
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
int chek_new_line(char *c)
{
    int i;
    int j;
    
    j = 0;
    i = 0;
    while(c[i] != '\0')
    {
        if(c[i] != ' ' && c[i] != '\0')
            j++;
        i++;
    }
    if(j)
        return(0);
    return (1);     
}
int digit(char *c)
{
    int i;

    i = 0;

    if(chek_new_line(c))
        return (0);
    if((c[i] == '-' || c[i] == '+') && (c[i + 1] == '-' || c[i + 1] == '+')) 
        return (0);
    while(c[i] != '\0' && ((c[i] >= '0' && c[i] <= '9') || ((c[i] == '-' || c[i] == '+') 
        && (c[i - 1] == ' ' || c[i - 1] == '\0'))|| (c[i] == ' ' && c[i] != '\0') || c[i] == ' '))
        i++;
    if(ft_strlen(c) == i)
        return (1);
    else
        return (0);
}
int main(int argc, char *argv[])
{
    int i;
    int j;
    char **split;
    int x;
    int a;
    int *b = (int *)malloc(sizeof(int) * argc - 1);
    int *first;
    
    first = b;
    i = 1;
    while (argv[i] != NULL && digit(argv[i]))
        i++;
    if(i != argc)
        return(write(1, "Error\n", 6), 1);
    i = 1;
    while(argc >= 2 && argv[i] != NULL)
    {
        j = 0;
        x = 0;
        split = ft_split(argv[i], ' ');
        while(split[x] != NULL)
        {
            // printf("b");
            *b = ft_atoi(split[x],first);
            // printf("%d\n", *b);
            b++;
            // j = 0;
            // while(split[x][j] != '\0')
            // {
            //     write(1, &split[x][j], 1);
            //     j++;
            // }
            // write(1, "\n", 1);
            x++;
        }
        i++;
    }
    b = first;
    ft_check_double_number(b);
    while(*b)
    {
        printf("%d\n", *b);
        b++;
    }
    return(0);
}
