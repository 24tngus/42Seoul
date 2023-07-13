# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soohykim <soohykim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 10:34:04 by soohykim          #+#    #+#              #
#    Updated: 2023/07/13 11:33:30 by soohykim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS = libft/get_next_line.c\
		libft/get_next_line_utils.c\
		so_long.c\
		so_long_move.c\
		so_long_map.c\
		so_long_check.c\
		so_long_dfs.c

OBJS = $(SRCS:.c=.o)

%.o:%.c so_long.h
	cc -Wall -Wextra -Werror -c $< -o $@

$(NAME) : 	$(OBJS)
			make -C ./mlx/
			cc -o so_long $(OBJS) -L./mlx -lmlx -framework OpenGL -framework AppKit

all : $(NAME)

clean :
	make -C ./mlx clean
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re
