/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_width_or_precision.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 10:32:56 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/25 18:41:01 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

void	ft_print_width(t_list *list)
{
	while (list->width-- > 0 && ++list->print_len)
		list->flags == '0' ? ft_putchar('0') : ft_putchar(' ');
}

void	ft_print_precision(t_list *list)
{
	while (list->precision-- > 0 && ++list->print_len)
		ft_putchar('0');
}
