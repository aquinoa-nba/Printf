# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/28 21:33:40 by aquinoa           #+#    #+#              #
#    Updated: 2020/12/13 10:39:15 by aquinoa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

SRCS_BASE		=	base/ft_printf.c

SRCS_PARSER		=	parser/ft_flags_parser.c parser/ft_parser.c \
					parser/ft_precis_parser.c parser/ft_width_parser.c

SRCS_PROCESSOR	=	processor/ft_c_type.c processor/ft_processor.c \
					processor/ft_s_type.c processor/ft_d_type.c \
					processor/ft_u_type.c processor/ft_x_type.c \
					processor/ft_p_type.c processor/ft_print_width.c \
					processor/ft_print_percision.c

OBJS_1			=	$(OBJS_BASE) $(OBJS_PARSER) $(OBJS_PROCESSOR)

OBJS_2			=	$(patsubst base/ft%.o, ft%.o, $(OBJS_BASE)) \
					$(patsubst parser/ft%.o, ft%.o, $(OBJS_PARSER)) \
					$(patsubst processor/ft%.o, ft%.o, $(OBJS_PROCESSOR))

OBJS_BASE		=	$(SRCS_BASE:%.c=%.o)

OBJS_PARSER		=	$(SRCS_PARSER:%.c=%.o)

OBJS_PROCESSOR	=	$(SRCS_PROCESSOR:%.c=%.o)

HEADERS		=	includes

FLAGS		=	-Wall -Wextra -Werror

$(NAME):		$(OBJS_1)
				make -C libft
				cp libft/libft.a $(NAME)
				ar rc $@ $(OBJS_2)

all:			$(NAME)

%.o:			%.c
				gcc -c $(FLAGS) $< -I $(HEADERS)

clean:
				make -C libft clean
				rm -f $(OBJS_2)

fclean:			clean
				make -C libft fclean
				rm -f $(NAME)

re:				fclean all

.PHONY:		all clean fclean re
