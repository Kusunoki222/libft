/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:33:04 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/07 13:22:28 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = ft_strlen(s);
	while (count >= 0)
	{
		if (s[count] == (unsigned char)c)
			return ((char *)(s + count));
		count--;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *s = "hogehoge";
// 	char *result = ft_strrchr(s, 0);
// 	printf("%s", result);
// }