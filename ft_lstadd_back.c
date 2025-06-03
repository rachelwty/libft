/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:39:19 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 21:05:25 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != 0)
		last = last->next;
	last->next = new;
}

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = 0;
	return (node);
}
/*
#include <stdio.h>

int main(void)
{
    t_list *head = 0;

    ft_lstadd_back(&head, ft_lstnew("one"));
    ft_lstadd_back(&head, ft_lstnew("two"));
    ft_lstadd_back(&head, ft_lstnew("three"));

    t_list *tmp = head;
    while (tmp != 0)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
    return 0;
}*/