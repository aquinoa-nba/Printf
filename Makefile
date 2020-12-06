# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/28 21:33:40 by aquinoa           #+#    #+#              #
#    Updated: 2020/12/06 20:00:21 by aquinoa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SRCS		=	base/ft_printf.c \
				parser/ft_flags_parser.c parser/ft_parser.c \
				parser/ft_precision_parser.c parser/ft_width_parser.c \
				processor/ft_c_type.c processor/ft_processor.c \
				processor/ft_s_type.c

OBJS		=	$(SRCS:%.c=%.o)

HEADERS		=	includes

FLAGS		=	-Wall -Wextra -Werror

$(NAME):		$(OBJS)
				make -C libft
				cp libft/libft.a $(NAME)
				ar rc $@ $(patsubst %/, , $(OBJS))

all:			$(NAME)

%.o:			%.c
				gcc -c $(FLAGS) $< -I $(HEADERS)

clean:
				make -C libft clean
				rm -f $(addprefix ../, $(OBJS))

fclean:			clean
				make -C libft fclean
				rm -f $(NAME)

re:				fclean all

.PHONY:		all clean fclean re
