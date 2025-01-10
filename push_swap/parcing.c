/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:35:46 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/10 17:52:57 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
    {
        printf("chek");   
        return (0);
    }
    if((c[0] == '-' || c[0] == '+') && (c[1] == '-' || c[1] == '+'))
    {
        printf("double sing");   
        return (0);
    }
    // printf("...%s..\n",c);
    while(c[i] != '\0' && ((c[i] >= '0' && c[i] <= '9') || ((c[i] == '-' || c[i] == '+') 
        && (c[i - 1] == ' ' || c[i - 1] == '\0'))|| (c[i] == ' ' && c[i] != '\0') || c[i] == ' '))
        i++;
    // printf("&%d&\n",i);
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

    i = 1;
    while (argv[i] != NULL && digit(argv[i]))
        i++;
    if(i != argc)
        return(write(1, "Errssor\n", 8), 1);
    i = 1;
    while(argc >= 2 && argv[i] != NULL)
    {
        j = 0;
        x = 0;
        split = ft_split(argv[i], ' ');
        while(split[x] != NULL)
        {
            a = ft_atoi(split[x]);
            printf("%d\n", a);
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
    return(0);
}
