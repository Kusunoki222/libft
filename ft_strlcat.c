/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:39:50 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/21 15:04:27 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
		s++;
	return (s);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[50];
// 	unsigned int	result;

// 	strcpy(dest, "Hello");
// 	result = ft_strlcat(dest, " World", 50);
// 	printf("case: %s, ft_strlcat: %u\n", dest, result);
// 	return (0);
// }
