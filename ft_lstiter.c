/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:47:43 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 21:07:52 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}
/*
int main(void)
{
    t_list *head = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));

    head->content = "one";
    head->next = node2;

    node2->content = "two";
    node2->next = NULL;

    ft_lstiter(head, print_content);

    free(node2);
    free(head);
    return 0;
}*/
