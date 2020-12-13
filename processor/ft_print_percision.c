/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 10:33:53 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 11:39:25 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

int		ft_print_precision(t_list *list, int print_len)
{
	while (list->precision-- > 0 && ++print_len)
		ft_putchar('0');
	return (print_len);
}
