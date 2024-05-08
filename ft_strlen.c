/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:37:02 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/08 19:11:26 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		str++;
		length++;
	}
	return (length);
}

// int	main(void)
// {
// 	char	text[] = "Hello World";
// 	int	length_main = ft_strlen(text);

// 	printf("文字列の長さ: %d\n", length_main);
// 	return (0);
// }