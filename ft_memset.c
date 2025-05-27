#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(void)
{
	char	str[] = "hello";
	int		i;
	char	*result;

	result = ft_memset(str + 1, 'o', 3);

	i = 0;
	while (i < 5)
	{
		if (str[i] != 0)
			printf("%c", str[i]);
		else
			printf(".");
		i++;
	}
	printf("\n");
	return (0);
}*/