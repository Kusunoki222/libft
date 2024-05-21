/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:16:28 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/21 17:52:01 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	unsigned int	result;
	int				sign;
	unsigned int	digit;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		digit = *str - '0';
		if (sign == 1 && ((int)result > (INT_MAX - (int)digit) / 10))
			return (INT_MAX);
		if (sign == -1 && ((int)result > (INT_MAX - (int)digit + 1) / 10))
			return (INT_MIN);
		result = result * 10 + digit;
		str++;
	}
	return (result * sign);
}
