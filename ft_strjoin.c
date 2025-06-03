/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:38:09 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 23:11:00 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	len1 = 0;
	while (s1[len1])
		len1++;
	len2 = 0;
	while (s2[len2])
		len2++;
	joined = (char *)malloc(len1 + len2 + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		joined[i] = s1[i];
		i++;
	}
	len2 = 0;
	while (s2[len2])
	{
		joined[i] = s2[len2];
		i++;
		len2++;
	}
	joined[i] = '\0';
	return (joined);
}
/*
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	char *result;

	result = ft_strjoin("super", "saiyan");
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}*/