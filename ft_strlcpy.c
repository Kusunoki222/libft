/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:39:19 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/18 17:52:14 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	num_copied;

	src_len = strlen(src);
	num_copied = 0;
	if (size != 0)
	{
		while (*src != '\0' && num_copied < size - 1)
		{
			*(dst++) = *(src++);
			num_copied++;
		}
		*dst = '\0';
	}

	return (src_len);
}


// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char	src[] = "Hello, world!";
// 	char	dst[20];

// 	size_t copied_chars = strlcpy(dst, src, sizeof(dst));

// 	printf("Copied string: %s\n", dst);
// 	printf("Number of characters copied: %zu\n", copied_chars);

// 	return (0);
// }
