/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 21:06:50 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/06 14:59:25 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	size_t			slen;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	result = (char *)malloc((slen + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
