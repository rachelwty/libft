#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	const char	*text = "lululemon";
	char		ch = 'n';
	char		*result;

	result = ft_strchr(text, ch);

	if (result != NULL)
		printf("First '%c' found at index: %ld\n", ch, result - text);
	else
		printf("Character '%c' not found.\n", ch);

	return (0);
}*/