/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 19:24:58 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 02:58:30 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_processor.h"

#include <stdio.h>

int		ft_p_type(t_list *list, va_list *ap)
{
	long nb;
	char			*nb_base;
	int				print_len;
	int				flag;
	char			*tmp;

	(list->precision == 0) ? (flag = 0) : (flag = 1);
	print_len = 0;
	nb = va_arg(*ap, long);
	nb_base = ft_itoa_base(nb, 16, list);
	if (!nb)
	{
		if (list->precision == 0)
			nb_base = ft_strjoin("0x", "");
		else
		{
			tmp = nb_base;
			nb_base = ft_strjoin("0x", tmp);
			free(tmp);
		}
	}
	else
	{
		tmp = nb_base;
		nb_base = ft_strjoin("0x", tmp);
		free(tmp);
	}
	print_len = ft_strlen(nb_base);
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
		ft_putstr(nb_base);
	}
	free(nb_base);
	return (print_len);
}
