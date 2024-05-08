# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 16:25:00 by kkusunok          #+#    #+#              #
#    Updated: 2024/05/08 18:23:36 by kkusunok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

$(NAME):
	@cc -Wall -Wextra -Werror bsq.c -o $(NAME)

clean:
	@find . -name $(NAME) -delete

fclean: clean
	@find data -name *.map -not -name $(MAP) -delete

