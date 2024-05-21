/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:52:44 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/21 15:03:42 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		*(ptr++) = (unsigned char)c;
	}
	return (s);
}

// int main(){
// 	char buffer[50];

// 	ft_memset(buffer, 'A', sizeof(buffer) - 1);
// 	buffer[49] = '\0';

// 	printf("Buffer after ft_memset: %s\n", buffer);

// return 0;
// }
