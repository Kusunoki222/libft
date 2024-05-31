/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:52:13 by kkusunok          #+#    #+#             */
/*   Updated: 2024/05/31 19:41:19 by kkusunok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

// #include <fcntl.h>
// int main()
// {
// 	int number = 12345;
// 	int negative_number = -6789;
// 	ft_putnbr_fd(number, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(negative_number, 1);
// 	write(1, "\n", 1);
// 	int fd = open("numbers.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1) {
// 		perror("open");
// 		return 1;
// 	}
// 	ft_putnbr_fd(number, fd);
// 	write(fd, "\n", 1);
// 	ft_putnbr_fd(negative_number, fd);
// 	write(fd, "\n", 1);
// 	if (close(fd) == -1) {
// 		perror("close");
// 		return 1;
// 	}
// 	return 0;
// }