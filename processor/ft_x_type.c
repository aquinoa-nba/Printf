/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:42:34 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/25 19:10:27 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

void	print_x(unsigned int nb, char **nb_base, t_list *list, int flag)
{
	if (list->flags == '-' || list->flags == 'f')
	{
		ft_print_precision(list);
		!nb && !flag ? ft_putchar(' ') : ft_putstr(*nb_base);
		ft_print_width(list);
	}
	else if (list->flags == '0')
	{
		ft_print_width(list);
		ft_putstr(*nb_base);
	}
	else
	{
		ft_print_width(list);
		ft_print_precision(list);
		!nb && !flag ? ft_putchar(' ') : ft_putstr(*nb_base);
	}
	free(*nb_base);
}

int		ft_x_type(t_list *list, va_list *ap)
{
	unsigned int	nb;
	char			*nb_base;
	int				flag;

	nb = va_arg(*ap, unsigned int);
	if (!(nb_base = ft_itoa_base(nb, 16, list)))
		return (0);
	if (nb == 0 && list->precision == 0 && list->width == 0)
		return (1);
	flag = (list->precision == 0 ? 0 : 1);
	list->print_len = ft_strlen(nb_base);
	list->width = (list->print_len < list->width ?
											list->width - list->print_len : 0);
	if (list->print_len < list->precision)
	{
		list->precision -= list->print_len;
		nb < 0 ? list->precision++ : 0;
		list->width -= list->precision;
	}
	else if (list->precision != -1)
		list->precision = 0;
	if (list->precision != -1)
		list->flags == '0' ? list->flags = ' ' : 0;
	print_x(nb, &nb_base, list, flag);
	return (1);
}
