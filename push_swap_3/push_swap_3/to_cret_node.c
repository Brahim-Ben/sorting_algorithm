/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_cret_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 11:05:39 by bbenaali          #+#    #+#             */
/*   Updated: 2025/01/13 13:34:07 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    void *content1;
    struct node *next;   
} l_list;

l_list *ft_lstnew(void *content)
{
    l_list *head;
    head ->
    head = (l_list *)malloc(sizeof(l_list));
    head->content1 = content;
    head->next = NULL;
    
    printf("%p\n", head->next);
    // head->next = content;
    return (head->content1);
}

int main()
{     
    char *s = "brahim";
    // s->content1 = "brahim";
    s = (char *)ft_lstnew(s);
    printf("%s ", s);
    s = "benaali";
    // s->content1 = "brahim";
    s = (char *)ft_lstnew(s);
    printf("%s", s);
}