#include <stdlib.h>

int	ft_strlen(char const *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	unsigned int	i;

	if (!s || !f)
		return (0);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (0);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
#include <stdio.h>
#include <stdlib.h>

char	to_upper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char *result;

	result = ft_strmapi("hello", to_upper);
	printf("%s\n", result);
	free(result);
	return (0);
}*/