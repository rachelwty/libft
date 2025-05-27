#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "supersaiyan";
	char	dst[6];
	size_t	len;
	int		i;

	len = ft_strlcpy(dst, src, sizeof(dst));

	printf("Copied length: %zu\n", len);
	i = 0;
	while (dst[i])
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/