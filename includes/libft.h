/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:33:49 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/06 16:40:21 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

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
//t_list		*ft_lstnew();
void		ft_putchar(char c);
char		ft_strchar(char *str, char c);
int			ft_strlen(char *str);
//void		ft_putstr(char *s);
//int		ft_strlcpy(char *dst, const char *src, int dstsize);

#endif
