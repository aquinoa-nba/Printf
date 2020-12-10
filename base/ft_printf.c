/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:20:23 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/08 19:26:05 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		check_format(char *format)
{
	int		i;

	i = 0;
	while (format[i] != '%' && format[i] != '\0')
	{
		ft_putchar(format[i]);
		i++;
	}
	return (i);
}

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	t_list		*list;
	int			percent;
	int			parser_len;
	int			format_len;

	va_start(ap, format);
	format_len = ft_strlen((char*)format);
	while (*format != '\0')
	{
		percent = check_format((char*)format);
		if (format[percent] == '\0' || !(list = malloc(sizeof(t_list))))
		{
			va_end(ap);
			break ;
		}
		else if (format[percent] == '%')
			parser_len = ft_parser((char*)(format + percent), &ap, list);
		format += percent + parser_len;
		format_len = format_len - parser_len + list->length;
	}
	return (format_len);
}
