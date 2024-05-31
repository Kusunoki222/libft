/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:58:56 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/31 20:16:13 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	orglen;
	size_t	sublen;
	size_t	i;

	if (!s)
		return (NULL);
	orglen = ft_strlen(s);
	if (orglen <= start || len == 0)
		sublen = 0;
	else if (orglen > start + len)
		sublen = len;
	else
		sublen = orglen - start;
	substr = (char *)malloc((sublen + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < sublen)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[sublen] = '\0';
	return (substr);
}
