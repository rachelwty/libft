/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:38:09 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/06/03 16:47:49 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = ft_calloc((s1_len + s2_len + 1), sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_memmove(dest, s1, s1_len);
	ft_memmove(dest + s1_len, s2, s2_len);
	return (dest);
}
/*
int main(void)
{
	char *s1 = "super";
	char *s2 = "saiyan";
	char *result = ft_strjoin(s1, s2);

	if (result)
	{
		printf("Result: %s\n", result);
		free(result);
	}
	else
		printf("Error: NULL\n");
	return (0);
}
*/
