/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:34:25 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/06 19:01:51 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_parser.h"

int		ft_width_parcer(t_list *list, char *str, va_list *ap)
{
	int		count;

	list->width = 0;
	count = 0;
	if (str[count] == '*')
	{
		list->width = va_arg(*ap, int);
		return (1);
	}
	while (ft_isdigit(str[count]))
	{
		list->width = list->width * 10 + str[count] - 48;
		count++;
	}
	return (count);
}