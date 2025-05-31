/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:39:19 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 23:00:51 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = 0;
	s_len = 0;
	while (dst[d_len] && d_len < dstsize)
		d_len++;
	while (src[s_len])
		s_len++;
	if (d_len == dstsize)
		return (dstsize + s_len);
	i = 0;
	while (src[i] && (d_len + i + 1) < dstsize)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len + i < dstsize)
		dst[d_len + i] = '\0';
	return (d_len + s_len);
}
/*
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	char	dst[20] = "super";
	char	src[] = "saiyan";
	size_t	len;
	int		i = 0;

	len = ft_strlcat(dst, src, sizeof(dst));

	printf("Returned length: %zu\n", len);
	while (dst[i])
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
