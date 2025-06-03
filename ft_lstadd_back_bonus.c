/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:39:19 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/06/03 18:42:05 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

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
/*
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
