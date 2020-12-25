/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:19:01 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/16 17:24:00 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

void	print_s(int s_len, char *s, t_list *list)
{
	if (list->flags == '-' || list->flags == 'f')
	{
		while (s_len-- > 0 && ++list->print_len)
			ft_putchar(*s++);
		ft_print_width(list);
	}
	else
	{
		ft_print_width(list);
		while (s_len-- > 0 && ++list->print_len)
			ft_putchar(*s++);
	}
}

int		ft_s_type(t_list *list, va_list *ap)
{
	char	*s;
	int		s_len;

	if (list->type == '%')
	{
		if (!(s = ft_strdup("%")))
			return (0);
	}
	else
	{
		if (!(s = va_arg(*ap, char*)))
			s = "(null)";
	}
	s_len = ft_strlen(s);
	if (list->precision != -1 && list->precision < s_len)
		s_len = list->precision;
	list->width -= s_len;
	print_s(s_len, s, list);
	list->type == '%' ? free(s) : 0;
	return (1);
}
