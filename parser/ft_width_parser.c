/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:34:25 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/15 14:33:46 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/parser.h"

void	ft_width_parser(t_list *list, char *str, va_list *ap)
{
	int		count;

	count = 0;
	if (str[count] == '*')
	{
		list->width = va_arg(*ap, int);
		if (list->width < 0)
		{
			list->flags = '-';
			list->width *= -1;
		}
		list->parser_len++;
	}
	while (ft_isdigit(str[count]))
	{
		list->width = list->width * 10 + str[count] - 48;
		count++;
	}
	list->parser_len += count;
}
