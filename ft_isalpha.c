/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:40:05 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/19 16:42:45 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char test1 = 'a';
// 	char test2 = '1';
// 	char test3 = 'B';
	
// 	printf("%c -> %s\n", test1, ft_isalpha(test1) ? "Alphabet" : "Not Alphabet");
// 	printf("%c -> %s\n", test2, ft_isalpha(test2) ? "Alphabet" : "Not Alphabet");
// 	printf("%c -> %s\n", test3, ft_isalpha(test3) ? "Alphabet" : "Not Alphabet");

// 	return(0);
// }
