/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:01:30 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/14 15:16:02 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
{
	unsigned char	*d;
	*d = (unsigned char *)dest;
	const unsigned char	*s;
	*s = (const unsigned char *)src;

	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}

