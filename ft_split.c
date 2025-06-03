/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:20:41 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 17:33:14 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*ft_dupword(char const *s, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(len + 1);
	if (!word)
		return (0);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	if (!s)
		return (0);
	lst = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			word_len = 0;
			while (s[word_len] && s[word_len] != c)
				word_len++;
			lst[i++] = ft_dupword(s, word_len);
			s += word_len;
		}
	}
	lst[i] = 0;
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	char **split = ft_split("jojos,bizarre,adeventure", ',');
	if (!split)
		return (1);
	for (size_t i = 0; split[i]; i++)
	{
		printf("%s\n", split[i]);
		free(split[i]);
	}
	free(split);
	return (0);
}*/