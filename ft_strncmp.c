/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:48:35 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/08 18:48:53 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	ans;

	i = 0;
	ans = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			ans = s1[i] - s2[i];
			return (ans);
		}
		i++;
	}
	return (0);
}

// #include	<stdio.h>
// #include	<string.h>

// int	main(void)
// {
// 	char	str1[] = "ABCD";
// 	char	str2[] = "ABCD";
// 	char	str3[] = "ABcd";
// 	char	str4[] = "A!23";
// 	int	nbr = 3;

// 	printf("Input; %s, %s, %s, %s, %d\n\n", str1, str2, str3, str4, nbr);
// 	printf("strncmp1(%s, %s), %d\n", str1, str2, strncmp(str1, str2, nbr));
// 	printf("strncmp2(%s, %s), %d\n", str1, str3, strncmp(str1, str3, nbr));
// 	printf("strncmp3(%s, %s), %d\n\n", str1, str4, strncmp(str1, str4, nbr));
// 	printf("result1(%s, %s), %d\n", str1, str2, ft_strncmp(str1, str2, nbr));
// 	printf("result2(%s, %s), %d\n", str1, str3, ft_strncmp(str1, str3, nbr));
// 	printf("result3(%s, %s), %d\n\n", str1, str4, ft_strncmp(str1, str4, nbr));
// 	return (0);
// }
