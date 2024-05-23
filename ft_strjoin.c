/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:27:54 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/23 14:56:31 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	lenall;

	if (!s1 || !s2)
		return (NULL);
	lenall = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc((lenall +1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, lenall + 1);
	ft_strlcat(result, s2, lenall + 1);
	return (result);
}
