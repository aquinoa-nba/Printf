/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:43:38 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/10 01:12:18 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_parser.h"

int		ft_parser(char *str, va_list *ap, t_list *list)
{
	int		parser_len;

	str++;
	parser_len = 0;
	parser_len += ft_flags_parser(list, str);
	if (!(parser_len += ft_width_parcer(list, str + parser_len, &(*ap))))
		list->width = 0;
	if (str[parser_len] == '.')
	{
		parser_len++;
		if (!(parser_len += ft_precision_parcer(list, str + parser_len, &(*ap))))
			list->precision = 0;
	}
	else
		list->precision = -1;
	list->type = ft_strchar(TYPES, str[parser_len]);
	parser_len++;
	list->length = ft_processor(list, &(*ap));
	return (parser_len + 1);
}
