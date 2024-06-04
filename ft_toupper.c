/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:30:59 by kkusunok          #+#    #+#             */
/*   Updated: 2024/06/04 10:00:25 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_toupper(int src)
{
	if (src >= 'a' && src <= 'z')
		return (src - 32);
	else
		return (src);
}

// int	main(void)
// {
// 	char	c;

// 	printf("Enter a character: ");
// 	scanf("%c", &c);

// 	printf("ft_toupper: %c\n", ft_toupper(c));
// 	printf("toupper: %c\n", toupper(c));
// 	return (0);
// }