/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:26:49 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 15:32:05 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char    str[] = "hello";
    int     i;

    ft_bzero(str + 2, 3);

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
    return(0);
}*/