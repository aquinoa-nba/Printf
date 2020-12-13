/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precis_parser.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:34:54 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 01:34:29 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_parser.h"

int		ft_precis_parcer(t_list *list, char *str, va_list *ap)
{
	int		count;

	list->precision = 0;
	count = 0;
	if (str[count] == '*')
	{
		list->precision = va_arg(*ap, int);
		if (list->precision < 0)
			list->precision = -1;
		return (1);
	}
	while (ft_isdigit(str[count]))
	{
		list->precision = list->precision * 10 + (str[count] - 48);
		count++;
	}
	return (count);
}
