/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:33:04 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/18 14:16:09 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	unsigned char n;
	int count;

	n = (unsigned char)c;
	count = 0;

	while (s[count])
	{
		count++;
	}

	while (count >= 0)
	{
		if (s[count] == n)
		{
			return ((char *)(s + count));
		}
		count--;
	}
	return (0);
}
