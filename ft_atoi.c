/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:16:28 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/18 17:58:46 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"












int is_digit(char ch) {
    return ch >= '0' && ch <= '9';
}

int is_space(char ch) {
    return ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r' || ch == '\f' || ch == '\v';
}

int my_atoi(const char *str) {
    int res = 0;  // 結果を格納する変数
    int sign = 1;  // 符号を格納する変数 (+1 or -1)
    int i = 0;     // 文字列を探索するためのインデックス

    // 空白をスキップする
    while (is_space(str[i])) {
        i++;
    }

    // 符号の確認
    if (str[i] == '-' || str[i] == '+') {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }

    // 数値の変換
    while (str[i] != '\0' && is_digit(str[i])) {
        int digit = str[i] - '0';

        // オーバーフローをチェック（<limits.h> 未使用）
        if (sign > 0 && (res > 214748364 || (res == 214748364 && digit > 7))) {
            return 2147483647; // オーバーフローの場合は INT_MAX 相当の値を返す
        } else if (sign < 0 && (res > 214748364 || (res == 214748364 && digit > 8))) {
            return -2147483648; // アンダーフローの場合は INT_MIN 相当の値を返す
        }

        res = res * 10 + digit;
        i++;
    }

    return sign * res;
}

int main() {
    char str[] = "2147483648"; // INT_MAX + 1 の試験
    printf("The integer is %d\n", my_atoi(str));
    return 0;
}
