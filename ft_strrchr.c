#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
	const char	*last = NULL;

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
#include <stdio.h>

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