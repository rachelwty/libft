/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtze-yan <wtze-yan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:32:09 by wtze-yan          #+#    #+#             */
/*   Updated: 2025/05/31 16:44:12 by wtze-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int main(void)
{
    printf("ft_atoi(\"-2147483648\") = %d\n", ft_atoi("-2147483648"));
    printf("ft_atoi(\"   -123\") = %d\n", ft_atoi("   -123"));
    printf("ft_atoi(\"+56abc\") = %d\n", ft_atoi("+56abc"));
    printf("ft_atoi(\"abc\") = %d\n", ft_atoi("abc"));
    return (0);
}*/
