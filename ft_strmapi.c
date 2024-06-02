/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 21:06:50 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/01 20:53:50 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	slen;
	size_t	i;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	result = (char *)malloc((slen + 1) * sizeof(char));
	i = 0;
	if (!result)
		return (NULL);
	while (i < slen)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[slen] = '\0';
	return (result);
}

// char shift_char(unsigned int i, char c)
// {
// 	return c + i;
// }
// char to_uppercase(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		return c - 32;
// 	}
// 	return c;
// }
// char identity(unsigned int i, char c) {
// 	(void)i;
// 	return c;
// }
// int main()
// {
// 	char *s = "abcde";
// 	char *result1 = ft_strmapi(s, shift_char);
// 	if (result1)
// 	{
// 		printf("Result 1 (shift_char): %s\n", result1);
// 		free(result1);
// 	}
// 	char *result2 = ft_strmapi(s, to_uppercase);
// 	if (result2) {
// 		printf("Result 2 (to_uppercase): %s\n", result2);
// 		free(result2);
// 	}
// 	char *result3 = ft_strmapi(s, identity);
// 	if (result3) {
// 		printf("Result 3 (identity): %s\n", result3);
// 		free(result3);
// 	}
// 	return 0;
// }