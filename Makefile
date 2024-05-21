# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkusunok <kkusunok@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 16:25:00 by kkusunok          #+#    #+#              #
#    Updated: 2024/05/21 15:06:47 by kkusunok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
#option
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
ft_atoi.c ft_strdup.c 

# ft_calloc.c \
# ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
# ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)
RM = rm -f

#default target
all: $(NAME)

#library
$(NAME): $(OBJS)
	$(AR) rcs $@ $^

#compile
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#clean
clean:
	$(RM) $(SRCS:.c=.o)
fclean: clean
	$(RM) $(NAME)

#re compile
re: fclean all

.PHONY : all clean fclean re bonus
