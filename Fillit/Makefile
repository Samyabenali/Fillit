# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkrebs <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/23 16:49:03 by mkrebs            #+#    #+#              #
#    Updated: 2016/12/08 15:29:09 by sait-ben         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FUNCTIONS = lecture.c \
			ft_split_tetri.c \
			main2.c \
			control.c \
			ft_control.c \
			gener_map.c \
			ft_control_annexe.c \
			test_position.c \
			place_tetri.c \
			delete_tetri.c \
			ft_tab_letters.c \
			backtrack.c \
			partie1.c \
			ft_split_tetri2.c

INCLUDE = fillit.h

FLAGS = -Wall -Wextra -Werror

LIB = Libft/libft.a

all : $(NAME)

$(NAME) :
	@make -C ./Libft/
	gcc $(FLAGS) -o $(NAME) -I $(INCLUDE) $(FUNCTIONS) $(LIB)

clean :
	@make -C ./Libft/ clean
	rm -rf all

fclean :	clean
	@make -C ./Libft/ fclean
	rm -rf $(NAME)

re :	fclean all

