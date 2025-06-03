/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:05:46 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/06/03 17:08:29 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
/*
void	*ft_memmove(void *dst, const void *src, size_t len);

int	main(void)
{
	char	str[] = "maklo";
	int		i;

	ft_memmove(str + 2, str, 3);

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
