/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:44:12 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 17:44:27 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char *a = "chariot";
	char *b = "cherry";

	int result = ft_strncmp(a, b, 3);
	printf("Result: %d\n", result);
	return (0);
}*/