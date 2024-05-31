/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:55:01 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/31 18:12:52 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}

// // テスト用の関数1: 小文字を大文字に変換
// void to_uppercase(unsigned int i, char *c) {
// 	(void)i;  // 未使用パラメータを無視
// 	if (*c >= 'a' && *c <= 'z') {
// 		*c = *c - 32;
// }
// }

// // テスト用の関数2: 文字をそのインデックス値だけシフト
// void shift_char(unsigned int i, char *c) {
// 	*c = *c + i;
// }

// // メイン関数
// int main() {
// 	// テスト用の文字列
// 	char s1[] = "abcde";
// 	char s2[] = "hello";

// 	// テスト1: 小文字を大文字に変換
// 	ft_striteri(s1, to_uppercase);
// 	printf("Result 1 (to_uppercase): %s\n", s1);

// 	// テスト2: 文字をそのインデックス値だけシフト
// 	ft_striteri(s2, shift_char);
// 	printf("Result 2 (shift_char): %s\n", s2);

// 	return 0;
// }