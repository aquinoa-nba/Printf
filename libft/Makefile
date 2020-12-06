# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/06 17:02:57 by aquinoa           #+#    #+#              #
#    Updated: 2020/12/06 18:54:43 by aquinoa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isdigit.c ft_putchar.c ft_strchar.c ft_strlen.c

OBJS	=	$(SRCS:%.c=%.o)

FLAGS	=	-Wall -Wextra -Werror

HEADER	=	../includes/libft.h

$(NAME):	$(OBJS)
			ar rc $@ $(OBJS)

all:		$(NAME)

%.o:		%.c $(HEADER)
			gcc -c $(FLAGS) $< -I $(HEADER)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re