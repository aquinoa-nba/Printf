/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:19:01 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 11:39:38 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

int		print_s(int s_len, int print_len, char *s, t_list *list)
{
	if (list->flags == '-')
	{
		while (s_len-- > 0 && ++print_len)
			ft_putchar(*s++);
		while (list->width-- > 0 && ++print_len)
			ft_putchar(' ');
	}
	else
	{
		while (list->width-- > 0 && ++print_len)
			list->flags == '0' ? ft_putchar('0') : ft_putchar(' ');
		while (s_len-- > 0 && ++print_len)
			ft_putchar(*s++);
	}
	return (print_len);
}

int		ft_s_type(t_list *list, va_list *ap)
{
	char	*s;
	int		print_len;
	int		s_len;

	print_len = 0;
	if (list->type == '%')
		s = ft_strjoin("%", "");
	else
	{
		if (!(s = va_arg(*ap, char*)))
			s = "(null)";
	}
	s_len = ft_strlen(s);
	if (list->precision != -1 && list->precision < s_len)
		s_len = list->precision;
	list->width -= s_len;
	print_len = print_s(s_len, print_len, s, list);
	list->type == '%' ? free(s) : 0;
	return (print_len);
}
