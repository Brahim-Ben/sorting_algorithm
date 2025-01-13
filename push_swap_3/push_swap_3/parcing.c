/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:35:46 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/13 13:29:16 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_nb(int *n, int x, int p)
{
    int i;
    int count;

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
// void ft_check_double_number(int *b, int p)
// {
//     int *s;
//     int x;
//     int v;

//     x = 0;
//     v = 0;
    
//     s = malloc(p * sizeof(int));
//     ft_memcpy(s, b);
//     while(x < p)
//     {
//         s = b;
//         s++;
//         v = 0;
//         while(v < p)
//         {
//                 printf("s:%d---b:%d\n" , *s, *b);
//             if(*s == *b)
//             {
//                 printf("%d---%d" , *s, *b);
//                 write(1, "Errosssr\n", 8);
//                 exit(1);
//             }
//             s++;
//             v++;

//         }
//         s++;
//         b++;
//         x++;
//     }
// }

int ft_check_double_number(int *b, int p)
{
    int x;
    int v;
    int *tmp;

    x = 0;
    v = 0;
    // tmp = b;
    while (x < p)
    {
        if (count_nb(b, b[x], p) > 1)
        {
            // free(b);
            // while(1);
            // write(1,"Error\n",6);
            // exit(1);
            return (1);
        }
        x++;
    }
    return (0);
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
    int *first;

    i = 1;
    while (argv[i] != NULL && digit(argv[i]))
        i++;
    if(i != argc)
    {
        // free(b);
        // while (1);
        return(write(1, "Error\n", 6), 1);
    }
    i = 1;
    int c = 0;
    while(argc >= 2 && argv[i] != NULL)
    {
        j = 0;
        x = 0;
        split = ft_split(argv[i], ' ');
        while(split[x] != NULL)
        {
            free(split[x]);
            x++;
            c++;
        }
        free(split);
        i++;
    }
    i = 1;
    int *b = (int *)malloc(sizeof(int) * c);
    first = b;
    c = 0;
     while(argc >= 2 && argv[i] != NULL)
    {
        j = 0;
        x = 0;
        split = ft_split(argv[i], ' ');
        while(split[x] != NULL)
        {
            *b = ft_atoi(split[x],first);
            b++;
            free(split[x]);
            x++;
            c++;
        }
        free(split);
        i++;
    }
    b = first;
    if(ft_check_double_number(b, c))
    {
        // int s = 0;
        // free(b);
        // b = NULL;
        write(1, "Error\n", 6);
        // while (1);
        exit(1);
    }
    int l = 0;
    b = first;
    while(l < c)
    {
        printf("%d\n", *b);
        // free(b);
        b++;
        l++;
    }
    // while (1);
    return(0);
}
