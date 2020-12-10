/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:17:37 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/10 01:17:35 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_processor.h"

int		ft_number_len(long nb)
{
	int		count;

	if (nb <= 0)
		count = 1;
	else
		count = 0;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

int		ft_u_type(t_list *list, va_list *ap)
{
	unsigned int	nb;
	int				print_len;
	int				flag;

	(list->precision == 0) ? (flag = 0) : (flag = 1);
	print_len = 0;
	nb = va_arg(*ap, unsigned int);
	print_len = ft_number_len(nb);
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
			ft_putnbr((long)nb);
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
		ft_putnbr((long)nb);
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
			ft_putnbr((long)nb);
	}
	return (print_len);
}
