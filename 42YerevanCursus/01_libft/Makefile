# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 23:15:23 by darakely          #+#    #+#              #
#    Updated: 2022/04/20 00:24:43 by tidavtya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)

BONUS_SRCS = $(wildcard ft_lst*.c)

OBJS = $(patsubst %.c, %.o, $(SRCS))

BONUS_OBJS = $(patsubst %.c, %.o, $(BONUS_SRCS))

RM = rm -f

AR = ar crs

%.o: %.c
	$(CC) $(CFLAGS) -c 	$< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(NAME) $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
