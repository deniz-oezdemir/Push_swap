# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 13:10:56 by denizozd          #+#    #+#              #
#    Updated: 2024/05/26 18:05:15 by denizozd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
LIB		=	$(LIBDIR)libft.a
LIBDIR	=	./libft/

CC		=	cc
FLAGS	=	-Wall -Wextra -Werror

SRCS	=	main.c pick_sort.c ops_push.c ops_rotate.c sort_small.c\
			utils_stack.c ops_reverse_rotate.c ops_swap.c sort_big.c\
			util_atoi.c utils_debug.c utils_free.c utils_check.c
OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(LIB):
	$(MAKE) -C $(LIBDIR)

$(NAME): $(OBJS) $(LIB)
	$(CC) -g $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) -g $(CFLAGS) -I$(LIBDIR) -I . -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBDIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBDIR) fclean

re: fclean all

.PHONY: all clean fclean re
