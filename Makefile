# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/28 21:33:40 by aquinoa           #+#    #+#              #
#    Updated: 2020/12/13 18:09:00 by aquinoa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SRCS		=	ft_printf.c ft_flags_parser.c ft_parser.c \
				ft_precision_parser.c ft_width_parser.c ft_c_type.c \
				ft_processor.c ft_s_type.c ft_d_type.c ft_u_type.c \
				ft_x_type.c ft_p_type.c ft_print_width.c ft_print_precision.c \

OBJS		=	$(SRCS:%.c=%.o)

HEADERS		=	includes

FLAGS		=	-Wall -Wextra -Werror

VPATH		=	base parser processor

$(NAME):		$(OBJS)
				make -C libft
				cp libft/libft.a $(NAME)
				ar rc $@ $(OBJS)

all:			$(NAME)

%.o:			%.c $(HEADERS)
				gcc -c $(FLAGS) $< -I $(HEADERS)

clean:
				make -C libft clean
				rm -f $(OBJS)

fclean:			clean
				make -C libft fclean
				rm -f $(NAME)

re:				fclean all

.PHONY:		all clean fclean re
