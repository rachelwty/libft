/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:06:13 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 17:06:22 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(void)
{
	char	str[] = "hello";
	int		i;
	char	*result;

	result = ft_memset(str + 1, 'o', 3);

	i = 0;
	while (i < 5)
	{
		if (str[i] != 0)
			printf("%c", str[i]);
		else
			printf(".");
		i++;
	}
	printf("\n");
	return (0);
}*/
