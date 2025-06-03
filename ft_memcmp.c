/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:04:27 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/06/03 17:12:26 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*
int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char	str1[] = "mamak";
	char	str2[] = "MAMAK";
	int		result;

	result = ft_memcmp(str1, str2, 5);

	if (result == 0)
		printf("Strings are equal in the first 5 bytes.\n");
	else if (result < 0)
		printf("str1 is less than str2 in the first 5 bytes.\n");
	else
		printf("str1 is greater than str2 in the first 5 bytes.\n");

	return (0);
}*/
