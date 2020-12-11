/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:33:49 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/11 04:15:05 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# define TYPES "cspdiuxX%"

typedef struct
{
	char	flags;
	int		width;
	int		precision;
	char	type;
	int		length;
}			t_list;

int			ft_isdigit(int c);
char		*ft_itoa_base(unsigned int n, int base, t_list *list);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(long nb);
char		ft_strchar(char *str, char c);
int			ft_strlen(char *str);

#endif
