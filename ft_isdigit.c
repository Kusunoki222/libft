/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:21:14 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/21 15:18:49 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int ch)
{
	if ((ch >= '0' && ch <= '9'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char test1 = 'a';
// 	char test2 = '1';
// 	char test3 = 'B';
// 	printf("%c -> %s\n", test1, ft_isdigit((int) test1) ? "digit" : "N");
// 	printf("%c -> %s\n", test2, ft_isdigit(test2) ? "digit" : "N");
// 	printf("%c -> %s\n", test3, ft_isdigit(test3) ? "digit" : "N");
// 	return(0);
// }