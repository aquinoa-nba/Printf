/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:27:50 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/16 17:27:57 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

int		ft_c_type(t_list *list, va_list *ap)
{
	char	c;

	c = va_arg(*ap, int);
	list->width--;
	if (list->flags == '-')
	{
		ft_putchar(c);
		ft_print_width(list);
	}
	else
	{
		ft_print_width(list);
		ft_putchar(c);
	}
	list->print_len++;
	return (1);
}
