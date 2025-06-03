/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:05:20 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 20:43:23 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	char	src[] = "abcde";
	char	dst[] = "12345";
	int		i;

	ft_memcpy(dst, src, 3);

	i = 0;
	while (i < 5)
	{
		if (dst[i] != 0)
			printf("%c", dst[i]);
		else
			printf(".");
		i++;
	}
	printf("\n");
	return (0);
}*/