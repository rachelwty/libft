/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:44:27 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/06/03 17:14:26 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}

void	del(void *content)
{
	free(content);
}
/*
int main(void)
{
    t_list *head = 0;

    head = malloc(sizeof(t_list));
    head->content = malloc(3);
    ((char *)head->content)[0] = 'H';
    ((char *)head->content)[1] = 'i';
    ((char *)head->content)[2] = '\0';
    head->next = 0;

    ft_lstclear(&head, del);
    if (head == 0)
        printf("List cleared\n");

    return 0;
}*/
