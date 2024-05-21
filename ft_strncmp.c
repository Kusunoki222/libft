/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:48:35 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/21 16:02:35 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[] = "ABCD";
// 	char	str2[] = "ABCD";
// 	char	str3[] = "ABcd";
// 	char	str4[] = "A!23";
// 	int	nbr = 3;
// 	printf("Input; %s, %s, %s, %s, %d\n\n", str1, str2, str3, str4, nbr);
// 	printf("strncmp1(%s, %s), %d\n", str1, str2, strncmp(str1, str2, nbr));
// 	printf("strncmp2(%s, %s), %d\n", str1, str3, strncmp(str1, str3, nbr));
// 	printf("strncmp3(%s, %s), %d\n\n", str1, str4, strncmp(str1, str4, nbr));
// 	printf("result1(%s, %s), %d\n", str1, str2, ft_strncmp(str1, str2, nbr));
// 	printf("result2(%s, %s), %d\n", str1, str3, ft_strncmp(str1, str3, nbr));
// 	printf("result3(%s, %s), %d\n\n", str1, str4, ft_strncmp(str1, str4, nbr));
// 	return (0);
// }
