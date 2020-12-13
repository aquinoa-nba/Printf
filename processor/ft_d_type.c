/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:17:37 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 11:39:16 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

int		print_d(int nb, int print_len, t_list *list, int flag)
{
	if (list->flags == '-')
	{
		nb < 0 ? ft_putchar('-') : 0;
		print_len = ft_print_precision(list, print_len);
		!nb && !flag ? ft_putchar(' ') : ft_putnbr(nb);
		print_len = ft_print_width(list, print_len);
	}
	else if (list->flags == '0')
	{
		nb < 0 ? ft_putchar('-') : 0;
		while (list->width-- > 0 && ++print_len)
			ft_putchar('0');
		ft_putnbr(nb);
	}
	else
	{
		print_len = ft_print_width(list, print_len);
		nb < 0 ? ft_putchar('-') : 0;
		print_len = ft_print_precision(list, print_len);
		!nb && !flag ? ft_putchar(' ') : ft_putnbr(nb);
	}
	return (print_len);
}

int		ft_d_type(t_list *list, va_list *ap)
{
	int		nb;
	int		print_len;
	int		flag;

	nb = va_arg(*ap, int);
	if (nb == 0 && list->precision == 0 && list->width == 0)
		return (0);
	flag = (list->precision == 0 ? 0 : 1);
	print_len = ft_number_len(nb);
	list->width = (print_len < list->width ? list->width - print_len : 0);
	if (print_len <= list->precision)
	{
		list->precision -= print_len;
		nb < 0 ? list->precision++ : 0;
		list->width -= list->precision;
	}
	else if (list->precision != -1)
		list->precision = 0;
	if (list->precision != -1)
		list->flags == '0' ? list->flags = ' ' : 0;
	print_len = print_d(nb, print_len, list, flag);
	return (print_len);
}
