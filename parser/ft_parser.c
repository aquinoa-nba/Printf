/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:43:38 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/16 17:17:54 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/parser.h"

int		ft_parser(char *str, va_list *ap, t_list *list)
{
	str++;
	ft_flags_parser(list, str);
	ft_width_parser(list, str + list->parser_len, &(*ap));
	if (str[list->parser_len] == '.')
	{
		list->parser_len++;
		ft_precision_parser(list, str + list->parser_len, &(*ap));
	}
	if (!(list->type = ft_strchar(TYPES, str[list->parser_len])))
		return (0);
	else
		list->parser_len++;
	list->parser_len++;
	return (1);
}
