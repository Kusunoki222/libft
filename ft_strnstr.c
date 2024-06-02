/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:43:24 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/01 20:53:07 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	needle_len = ft_strlen(needle);
	i = 0;
	if (needle_len == 0)
		return ((char *)haystack);
	if (len == 0 || (len < needle_len && haystack != NULL))
		return (NULL);
	while (i <= len - needle_len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char *haystack = "abcdefgh";
// 	const char *needle = "abc";
// 	size_t len = 2;

// 	// テストケース 1: 正常なケース
// 	char *result = ft_strnstr(haystack, needle, len);
// 	if (result == NULL)
// 		printf("Test Case 1: NULL\n");  // 期待される出力
// 	else
// 		printf("Test Case 1: %s\n", result);

// 	// テストケース 2: needle が空文字列の場合
// 	result = ft_strnstr(haystack, "", len);
// 	if (result == NULL)
// 		printf("Test Case 2: NULL\n");
// 	else
// 		printf("Test Case 2: %s\n", result);  // 期待される出力

// 	// テストケース 3: len が 0 の場合
// 	result = ft_strnstr(haystack, needle, 0);
// 	if (result == NULL)
// 		printf("Test Case 3: NULL\n");  // 期待される出力
// 	else
// 		printf("Test Case 3: %s\n", result);

// 	// テストケース 4: haystack に needle が存在しない場合
// 	result = ft_strnstr(haystack, "xyz", len);
// 	if (result == NULL)
// 		printf("Test Case 4: NULL\n");  // 期待される出力
// 	else
// 		printf("Test Case 4: %s\n", result);

// 	// テストケース 5: haystack または needle が NULL の場合
// 	result = ft_strnstr(NULL, "fake", 3);
// 	if (result == NULL)
// 		printf("Test Case 5: NULL\n");  // 期待される出力
// 	else
// 		printf("Test Case 5: %s\n", result);

// 	return 0;
// }