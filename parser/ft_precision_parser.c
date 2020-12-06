/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_parser.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:34:54 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/06 17:58:44 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_parser.h"

int		ft_precision_parcer(t_list *list, char *str, va_list *ap)
{
	int		count;

	list->precision = 0;
	count = 0;
	if (str[count] == '*')
	{
		list->precision = va_arg(*ap, int);
		return (1);
	}
	while (ft_isdigit(str[count]))
	{
		list->precision = list->precision * 10 + (str[count] - 48);
		count++;
	}
	return (count);
}
