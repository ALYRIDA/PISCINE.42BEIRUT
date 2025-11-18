# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aareslan <aareslan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 13:26:58 by aareslan          #+#    #+#              #
#    Updated: 2025/04/28 14:53:15 by aareslan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

gcc -Wall -Werror -Wextra -c ft_putchar.c
gcc -Wall -Werror -Wextra -c ft_swap.c
gcc -Wall -Werror -Wextra -c ft_putstr.c
gcc -Wall -Werror -Wextra -c ft_strlen.c
gcc -Wall -Werror -Wextra -c ft_strcmp.c

ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

rm - f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
