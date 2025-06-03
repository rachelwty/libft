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

static int	word_count(char const *s, char c)
{
	int	index;
	int	count;

	index = 0;
	while (s[index] && s[index] == c)
		index++;
	if (!*s)
		return (0);
	count = 1;
	while (s[index])
	{
		if ((index > 0 && s[index - 1] == c) && s[index] != c)
			count++;
		index++;
	}
	return (count);
}

static char	**empty_array(void)
{
	char	**empty;

	empty = (char **) malloc(sizeof(char *));
	if (empty)
		empty[0] = NULL;
	return (empty);
}

static int	has_failed(char *str, char **array, int computed_index)
{
	int	index;

	if (!str)
	{
		index = 0;
		while (index <= computed_index)
		{
			free(array[index]);
			index++;
		}
		free(array);
		return (1);
	}
	return (0);
}

static char	**handle_split(char **ptr, int ptr_size, char const *s, char c)
{
	int	end_index;
	int	array_index;
	int	sub_index;

	array_index = 0;
	while (array_index < ptr_size)
	{
		while (*s == c)
			s++;
		end_index = 0;
		while (s[end_index] && s[end_index] != c)
			end_index++;
		ptr[array_index] = (char *) malloc(end_index + 1);
		if (has_failed(ptr[array_index], ptr, array_index))
			return (NULL);
		sub_index = 0;
		while (sub_index < end_index)
		{
			ptr[array_index][sub_index] = s[sub_index];
			sub_index++;
		}
		ptr[array_index++][sub_index] = '\0';
		s += end_index + 1;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**split;

	if (ft_strlen(s) == 0)
		return (empty_array());
	while (*s && *s == c)
		s++;
	words = word_count(s, c);
	if (words == 0)
		return (empty_array());
	split = (char **) malloc((words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[words] = NULL;
	return (handle_split(split, words, s, c));
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
}