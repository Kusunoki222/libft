/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:39:50 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/04 09:48:18 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = ft_strlen(src);
	i = 0;
	while (dlen < size && dest[dlen] != '\0')
		dlen++;
	if (size == 0 || size <= dlen)
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
// 	char			dest[50];
// 	unsigned int	result;

// 	strcpy(dest, "Hello");
// 	result = ft_strlcat(dest, " World", 50);
// 	printf("case: %s, ft_strlcat: %u\n", dest, result);
// 	return (0);
// }
