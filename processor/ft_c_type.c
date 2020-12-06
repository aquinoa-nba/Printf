/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:27:50 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/05 15:02:08 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_processor.h"

int		ft_c_type(t_list *list, va_list *ap)
{
	char	c;
	int		print_len;

	c = va_arg(*ap, int);
	print_len = 0;
	if (list->flags == '-')
	{
		ft_putchar(c);
		while (--list->width > 0)
		{
			ft_putchar(' ');
			print_len++;
		}
	}
	else
	{
		while (--list->width > 0)
		{
			ft_putchar(' ');
			print_len++;
		}
		ft_putchar(c);
	}
	print_len++;
	return (print_len);
}
