/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:58:56 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/05 19:03:49 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	sublen;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start || len == 0)
		sublen = 0;
	else if (slen > start + len)
		sublen = len;
	else
		sublen = slen - start;
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
