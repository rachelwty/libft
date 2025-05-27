#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
	{
        substr = (char *)malloc(1);
        if (!substr)
            return (NULL);
            substr[0] = '\0';
            return (substr);
    }
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);

	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char	*str = "supersaiyan";
	char	*sub;

	sub = ft_substr(str, 5, 7);
	if (sub)
		printf("Substring: %s\n", sub);
	else
		printf("Allocation failed\n");

	free(sub);
	return (0);
}*/