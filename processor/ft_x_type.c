/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:42:34 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 11:39:48 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

int		print_x(unsigned int nb, char *nb_base, t_list *list, int flag)
{
	int		print_len;

	print_len = 0;
	if (list->flags == '-')
	{
		print_len = ft_print_precision(list, print_len);
		!nb && !flag ? ft_putchar(' ') : ft_putstr(nb_base);
		print_len = ft_print_width(list, print_len);
	}
	else if (list->flags == '0')
	{
		while (list->width-- > 0 && ++print_len)
			ft_putchar('0');
		ft_putstr(nb_base);
	}
	else
	{
		print_len = ft_print_width(list, print_len);
		print_len = ft_print_precision(list, print_len);
		!nb && !flag ? ft_putchar(' ') : ft_putstr(nb_base);
	}
	return (print_len);
}

int		ft_x_type(t_list *list, va_list *ap)
{
	unsigned int	nb;
	char			*nb_base;
	int				print_len;
	int				flag;

	nb = va_arg(*ap, unsigned int);
	nb_base = ft_itoa_base(nb, 16, list);
	if (nb == 0 && list->precision == 0 && list->width == 0)
		return (0);
	flag = (list->precision == 0 ? 0 : 1);
	print_len = ft_strlen(nb_base);
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
	print_len += print_x(nb, nb_base, list, flag);
	free(nb_base);
	return (print_len);
}
