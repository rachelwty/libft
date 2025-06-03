/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:50:58 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 20:33:47 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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

int	main(void)
{
	t_list *node;

	node = ft_lstnew("Delaware");
	if (node)
		printf("%s\n", (char *)node->content);
	free(node);
	return (0);
}*/