/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:42:34 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/11 04:16:00 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_processor.h"

int		ft_x_type(t_list *list, va_list *ap)
{
	unsigned int	nb;
	char			*nb_base;
	int				print_len;
	int				flag;

	(list->precision == 0) ? (flag = 0) : (flag = 1);
	print_len = 0;
	nb = va_arg(*ap, unsigned int);
	nb_base = ft_itoa_base(nb, 16, list);
	print_len = ft_strlen(nb_base);
	if (nb == 0 && list->precision == 0 && list->width == 0)
		return (--print_len);
	if (print_len < list->width)
		list->width -= print_len;
	else
		list->width = 0;
	if (print_len < list->precision)
	{
		list->precision -= print_len;
		nb < 0 ? list->precision++ : 0;
		list->width -= list->precision;
	}
	else if (list->precision != -1)
		list->precision = 0;
	if (list->flags == '-')
	{
		nb < 0 ? ft_putchar('-') : 0;
		while (list->precision-- > 0 && ++print_len)
			ft_putchar('0');
		if (!nb && !flag)
			ft_putchar(' ');
		else
			ft_putstr(nb_base);
		while (list->width-- > 0 && ++print_len)
			ft_putchar(' ');
	}
	else if (list->flags == '0')
	{
		if (list->precision == -1)
		{
			list->precision = list->width;
			list->width = 0;
		}
		while (list->width-- > 0 && ++print_len)
			ft_putchar(' ');
		nb < 0 ? ft_putchar('-') : 0;
		while (list->precision-- > 0 && ++print_len)
			ft_putchar('0');
		ft_putstr(nb_base);
	}
	else
	{
		while (list->width-- > 0 && ++print_len)
			ft_putchar(' ');
		nb < 0 ? ft_putchar('-') : 0;
		list->width--;
		while (list->precision-- > 0 && ++print_len)
			ft_putchar('0');
		if (!nb && !flag)
			ft_putchar(' ');
		else
			ft_putstr(nb_base);
	}
	return (print_len);
}
