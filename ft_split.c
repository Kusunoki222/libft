/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:45:08 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/31 16:49:23 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	count;
	int		inword;

	count = 0;
	inword = 0;
	while (*s)
	{
		if (*s != c && inword == 0)
		{
			inword = 1;
			count++;
		}
		else if (*s == c)
			inword = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s)
		return (NULL);
	result = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			result[j++] = word_dup(s, start, i);
	}
	result[j] = NULL;
	return (result);
}

// int main()
// {
// 	char **result = ft_split("Hello world, this is a test.", ' ');
// 	if (result == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return 1;
// 	}

// 	for (int i = 0; result[i] != NULL; i++)
// 	{
// 		printf("result[%d]: %s\n", i, result[i]);
// 		free(result[i]); // 各部分文字列を解放する
// 	}
// 	free(result); // 配列自体を解放する

// 	return 0;
// }
