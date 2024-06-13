/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:16:28 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/13 16:28:55 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	proc_atoi(int sign, const char *str)
{
	long	temp;
	long	value;

	value = 0;
	while (ft_isdigit(*str))
	{
		temp = value * 10 + *str - '0';
		if (sign == 1 && !(temp >= value))
			return (LONG_MAX);
		else if (sign == -1 && !(temp >= value))
			return (LONG_MIN);
		value = temp;
		str++;
	}
	return (value);
}

int	ft_atoi(const char *str)
{
	long	value;
	int		sign;

	sign = 1;
	value = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	value = proc_atoi(sign, str);
	return ((int)(value * sign));
}
