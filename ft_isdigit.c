/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:21:14 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/14 11:57:51 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int ch)
{
	if((ch >= '0' && ch <= '9'))
	{
		return(1);
	}
	return(0);
}

#include <stdio.h>

int main(void)
{
	char test1 = 'a';
	char test2 = '1';
	char test3 = 'B';
	
	printf("%c -> %s\n", test1, ft_isdigit( (int) test1) ? "digit" : "Not digit");
	printf("%c -> %s\n", test2, ft_isdigit(test2) ? "digit" : "Not digit");
	printf("%c -> %s\n", test3, ft_isdigit(test3) ? "digit" : "Not digit");

	return(0);
}