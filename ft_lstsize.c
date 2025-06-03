/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:53:39 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 22:54:12 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = 0;
	return (node);
}

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *head = 0;

	head = ft_lstnew("one");
	head->next = ft_lstnew("two");
	head->next->next = ft_lstnew("three");

	printf("%d\n", ft_lstsize(head));
	return 0;
}*/