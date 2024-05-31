/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:18:33 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/31 16:49:20 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_iptlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_tochar(char *s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char			*result;
	long int		iptlen;
	unsigned int	nbr;

	iptlen = ft_iptlen(n);
	result = (char *)malloc(sizeof(char) * (iptlen + 1));
	if (!result)
		return (NULL);
	result[iptlen] = '\0';
	if (n == 0)
		result[0] = '0';
	else if (n < 0)
	{
		result[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	if (n != 0)
		result = ft_tochar(result, nbr, iptlen - 1);
	return (result);
}

// int main(void)
// {
// 	// テストケース
// 	int test_values[] = {0, 123, -456, 2147483647, -2147483648};
// 	size_t num_tests = sizeof(test_values) / sizeof(test_values[0]);

// 	// 各テストケースに対してft_itoaを呼び出し、結果を表示
// 	for (size_t i = 0; i < num_tests; i++)
// 	{
// 		char *result = ft_itoa(test_values[i]);
// 		if (result)
// 		{
// 			printf("ft_itoa(%d) = %s\n", test_values[i], result);
// 			free(result); // メモリリークを防ぐために解放
// 		}
// 		else
// 		{
// 			printf("ft_itoa(%d) failed to allocate memory\n", test_values[i]);
// 		}
// 	}

// 	return 0;
// }
