/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:33:49 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/16 22:46:52 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define TYPES "cspdiuxX%"

typedef struct	s_list
{
	char		flags;
	int			width;
	int			precision;
	char		type;
	int			parser_len;
	int			print_len;
}				t_list;

int				ft_isdigit(int c);
char			*ft_itoa_base(long n, long base, t_list *list);
int				ft_number_len(long nb);
void			ft_putchar(char c);
void			ft_putnbr(long nb);
void			ft_putstr(char *str);
char			ft_strchar(char *str, char c);
char			*ft_strdup(char *str);
char			*ft_strjoin(char *str1, char *str2);
int				ft_strlen(char *str);

#endif
