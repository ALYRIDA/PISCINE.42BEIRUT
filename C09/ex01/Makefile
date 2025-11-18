# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aareslan <aareslan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 15:15:22 by aareslan          #+#    #+#              #
#    Updated: 2025/04/29 19:44:30 by aareslan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = ${SRCS:.c=.o}
INCS = includes
NAME = libft.a
LIBC = ar rc
LIBR = ranlib
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
.c.o:
	  ${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}
		${LIBR} ${NAME}

all: ${NAME}

clean:
	   ${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all