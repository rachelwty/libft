/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:45:50 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/06/03 17:34:18 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
int	main(void)
{
	char str[] = "lululemon";
	char *last = ft_strrchr(str, 'l');

	if (last != NULL)
		printf("Last 'l' found at index: %ld\n", last - str);
	else
		printf("'l' not found.\n");

	return (0);
}*/
