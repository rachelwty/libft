#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	main(void)
{
	const char	*haystack = "Find the needle in the haystack";
	const char	*needle = "needle";
	char		*result;

	result = ft_strnstr(haystack, needle, 30);

	if (result != NULL)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");

	return (0);
}*/