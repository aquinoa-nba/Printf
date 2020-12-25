/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:17:37 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/25 19:13:22 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

void	print_d(long nb, t_list *list, int flag)
{
	if (list->flags == '-' || list->flags == 'f')
	{
		nb < 0 ? ft_putchar('-') : 0;
		ft_print_precision(list);
		!nb && !flag ? ft_putchar(' ') : ft_putnbr(nb);
		ft_print_width(list);
	}
	else if (list->flags == '0')
	{
		nb < 0 ? ft_putchar('-') : 0;
		ft_print_width(list);
		ft_putnbr(nb);
	}
	else
	{
		ft_print_width(list);
		nb < 0 ? ft_putchar('-') : 0;
		ft_print_precision(list);
		!nb && !flag ? ft_putchar(' ') : ft_putnbr(nb);
	}
}

int		ft_d_type(t_list *list, va_list *ap)
{
	long	nb;
	int		flag;

	nb = va_arg(*ap, int);
	if (list->type == 'u')
		nb = (unsigned int)nb;
	if (nb == 0 && list->precision == 0 && list->width == 0)
		return (1);
	flag = (list->precision == 0 ? 0 : 1);
	list->print_len = ft_number_len(nb);
	list->width = (list->print_len < list->width ?
											list->width - list->print_len : 0);
	if (list->print_len <= list->precision)
	{
		list->precision -= list->print_len;
		nb < 0 ? list->precision++ : 0;
		list->width -= list->precision;
	}
	else if (list->precision != -1)
		list->precision = 0;
	if (list->precision != -1)
		list->flags == '0' ? list->flags = ' ' : 0;
	print_d(nb, list, flag);
	return (1);
}
