/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:39:50 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/13 16:28:36 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (!size)
		return (slen);
	i = 0;
	if (size <= dlen)
		return (size + slen);
	while (src[i] != '\0' && dlen + i < size - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
		dest[dlen + i] = '\0';
	return (dlen + slen);
}

// int	main(void)
// {
// 	char dest1[50] = "Hello, ";
// 	char dest2[50] = "Hello, ";
// 	const char src[] = "World!";
// 	size_t size = 0;
// 	size_t result1, result2;
// 	result1 = ft_strlcat(dest1, src, size);
// 	printf("ft_strlcat result: %zu\n", result1);
// 	printf("ft_strlcat dest: %s\n", dest1);
// 	result2 = strlcat(dest2, src, size);
// 	printf("strlcat result: %zu\n", result2);
// 	printf("strlcat dest: %s\n", dest2);
// 	return (0);
// }