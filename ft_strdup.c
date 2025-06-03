/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:34:54 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/06/03 16:53:26 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*copy;

	len = 0;
	while (s1[len])
		len++;
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
char	*ft_strdup(const char *s1);

int	main(void)
{
	const char	*original = "supersaiyan";
	char		*copy;

	copy = ft_strdup(original);
	if (copy)
		printf("Copy: %s\n", copy);
	else
		printf("Memory allocation failed\n");
	free(copy);

	return (0);
}*/
