/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:19:01 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/05 19:44:47 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_processor.h"

int		ft_s_type(t_list *list, va_list *ap)
{
	char	*s;
	int		print_len;
	int		s_len;

	s = va_arg(*ap, char*);
	s_len = ft_strlen(s);
	if (list->precision != -1 && list->precision < s_len)
	{
		s_len = list->precision;
//		strlcpy(s, s, list->precision);
	}
	list->width -= s_len;
	print_len = 0;
	if (list->flags == '-')
	{
		while (s_len > 0)
		{
			ft_putchar(*s);
			s++;
			print_len++;
			s_len--;
		}
		while (list->width > 0)
		{
			ft_putchar(' ');
			print_len++;
			list->width--;
		}
	}
	else
	{
		while (list->width > 0)
		{
			ft_putchar(' ');
			print_len++;
			list->width--;
		}
		while (s_len > 0)
		{
			ft_putchar(*s);
			s++;
			print_len++;
			s_len--;
		}
	}
//	print_len += s_len;
	return (print_len);
}
