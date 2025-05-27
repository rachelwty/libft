#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	char	str[] = "hello";
	char	*result;
	size_t	i;

	result = ft_memchr(str, 'l', 5);

	i = 0;
	while (i < 5)
	{
		if (&str[i] == (char *)result)
			printf("[%c]", str[i]);
		else
			printf("%c", str[i]);
		i++;
	}
	printf("\n");

	return (0);
}*/