# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/02 10:42:15 by elel-yak          #+#    #+#              #
#    Updated: 2023/06/08 01:08:05 by elel-yak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
# CFLAGS += -fsanitize=address -g3 -O3

VPATH = Instructions/ utils/

SRC = push_swap.c\
		parcing.c\
		sort.c\
		sort3.c\
		sort5.c\
		a_b.c\
		b_a.c\
		stack_fill.c\
		sa.c\
		sb.c\
		ss.c\
		pa.c\
		pb.c\
		ra.c\
		rb.c\
		rr.c\
		rra.c\
		rrb.c\
		rrr.c\
		ft_putstr_fb.c\
		ft_split.c\
		string_manipulation.c\
		LL_manipulation.c\

OBJ = $(addprefix objs/, $(SRC:.c=.o))

objs/%.o: %.c
		@mkdir -p objs
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) 

${NAME}: $(OBJ)
	$(CC) $(CFLAGS)  -o $(NAME) $(OBJ)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
