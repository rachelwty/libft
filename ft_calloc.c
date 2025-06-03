/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:32:35 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 23:03:50 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total;
	size_t			i;
	unsigned char	*ptr;

	total = count * size;
	ptr = (unsigned char *)malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int		*arr;
	size_t	i;

	arr = (int *)ft_calloc(5, sizeof(int));
	if (!arr)
	{
		printf("Allocation failed\n");
		return (1);
	}
	i = 0;
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}*/