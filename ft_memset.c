/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:52:44 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/14 13:34:57 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr = (unsigned char *)s; // メモリ領域の先頭ポインタを設定
	while (n-- > 0) {
		*ptr++ = (unsigned char)c; // ポインタを進めながら値を設定
	}
	return s; // メモリ領域の先頭ポインタを返すs
	}

int main() {
	char buffer[50];

	// メモリ領域を 'A' で埋める
	ft_memset(buffer, 'A', sizeof(buffer) - 1);
	buffer[49] = '\0'; // 文字列の終端をヌル文字で指定

	printf("Buffer after ft_memset: %s\n", buffer);

return 0;
}
