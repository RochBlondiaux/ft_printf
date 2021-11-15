# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rblondia <rblondia@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 17:55:37 by rblondia          #+#    #+#              #
#    Updated: 2021/11/15 15:34:12 by rblondia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c \
		utils/ft_putchar.c \
		utils/ft_putnbr.c \
		utils/ft_putstr.c \
		utils/ft_strlen.c

OBJS = ${SRCS:.c=.o}

INCLUDES = ft_printf.h

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

%.o: %.c ft_printf.h
		${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o $@

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${BONUS_OBJS} 

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:			all clean fclean re 