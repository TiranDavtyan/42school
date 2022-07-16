# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 13:55:44 by tidavtya          #+#    #+#              #
#    Updated: 2022/06/18 14:03:55 by tidavtya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC	=	cc

CFLAGS = -Wall -Wextra -Werror

ALL_SRCS = $(wildcard *.c)

OBJS = $(patsubst %.c, %.o, $(ALL_SRCS))

RM = rm -f

AR = ar rcs

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
