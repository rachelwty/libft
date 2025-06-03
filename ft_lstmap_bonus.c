/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:06:47 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/06/03 17:05:37 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dst == 0 && src == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst < src)
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
	}
	else
	{
		while (n--)
			*(d + n) = *(s + n);
	}
	return (dst);
}
/*
void *ft_memmove(void *dst, const void *src, size_t n);

int main(void)
{
	char src[] = "abcdef";
	char dst[10];

	ft_memmove(dst, src, 6)
	printf("Result: %s\n", dst);
	return (0);
}*/
