/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:39:19 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/04 09:36:44 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	num_cpy;

	src_len = ft_strlen(src);
	num_cpy = 0;
	if (size != 0)
	{
		while (*src != '\0' && num_cpy < size - 1)
		{
			*(dst++) = *(src++);
			num_cpy++;
		}
		*dst = '\0';
	}
	return (src_len);
}
/*
int	main(void)
{
	char	src[] = "Hello, world!";
	char	dst[20];
	size_t copied_chars = strlcpy(dst, src, sizeof(dst));
	size_t copied_chars_dn = strlcpy(NULL, src, sizeof(dst));
	size_t copied_chars_sn = strlcpy(dst, NULL, sizeof(dst));
	size_t copied_chars_s0 = strlcpy(dst, src, 0);
	size_t copied_chars_ft = ft_strlcpy(dst, src, sizeof(dst));
	size_t copied_chars_ftdn = ft_strlcpy(NULL, src, sizeof(dst));
	size_t copied_chars_ftsn = ft_strlcpy(dst, NULL, sizeof(dst));
	size_t copied_chars_fts0 = ft_strlcpy(dst, src, 0);
	printf("Copied string: %s\n", dst);
	printf("strlcpy: %zu\n", copied_chars);
	printf("strlcpy_dn: %zu\n", copied_chars_dn);
	printf("strlcpy_sn: %zu\n", copied_chars_sn);
	printf("strlcpy_s0: %zu\n", copied_chars_s0);
	printf("ft_strlcpy: %zu\n", copied_chars_ft);
	printf("ft_strlcpy_dn: %zu\n", copied_chars_ftdn);
	printf("ft_strlcpy_sn: %zu\n", copied_chars_ftsn);
	printf("ft_strlcpy_s0: %zu\n", copied_chars_fts0);
	return (0);
}
*/