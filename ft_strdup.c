/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:44:36 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/07 13:02:25 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*adrs;

	adrs = (char *) malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (adrs == NULL)
		return (NULL);
	ft_strcpy(adrs, (char *)s);
	return (adrs);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	teststr[] = "testtest";
// 	char	*duplicated_str;

// 	duplicated_str = ft_strdup(teststr);
// 	if (duplicated_str != NULL)
// 	{
// 		printf("Original: %s\n", teststr);
// 		printf("Duplicated: %s\n", duplicated_str);
// 	}
// 	free(duplicated_str);
// 	return (0);
// }
