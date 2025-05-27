#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

static int	is_in_set(char c, const char *set)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = 0;
	while (s1[end])
		end++;
	if (start >= end)
{
	char *empty = (char *)malloc(1);
	if (!empty)
		return (NULL);
	empty[0] = '\0';
	return (empty);
}
end--;
	while (end > start && is_in_set(s1[end], set))
		end--;
	trimmed = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
/*
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char	*trimmed;
	char	str[] = "skibidi";
	char	set[] = "bidi";

	trimmed = ft_strtrim(str, set);
	if (trimmed)
	{
        printf("%s\n", trimmed);
        free(trimmed);
    }
    return (0);
}*/