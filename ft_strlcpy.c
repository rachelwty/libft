/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:40:21 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/06/03 16:54:40 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	src[] = "supersaiyan";
	char	dst[6];
	size_t	len;
	int		i;

	len = ft_strlcpy(dst, src, sizeof(dst));

	printf("Copied length: %zu\n", len);
	i = 0;
	while (dst[i])
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
