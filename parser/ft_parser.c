/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:43:38 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 17:23:15 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/parser.h"

int		ft_parser(char *str, va_list *ap, t_list *list)
{
	int		parser_len;

	str++;
	parser_len = 0;
	parser_len += ft_flags_parser(list, str);
	parser_len += ft_width_parser(list, str + parser_len, &(*ap));
	if (str[parser_len] == '.')
	{
		parser_len++;
		parser_len += ft_precision_parser(list, str + parser_len, &(*ap));
	}
	else
		list->precision = -1;
	list->type = ft_strchar(TYPES, str[parser_len]);
	parser_len++;
	list->length = ft_processor(list, &(*ap));
	return (parser_len + 1);
}
