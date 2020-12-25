/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:20:23 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/25 18:10:16 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

t_list	make_list(void)
{
	t_list		list;

	list.flags = ' ';
	list.width = 0;
	list.precision = -1;
	list.type = ' ';
	list.parser_len = 0;
	list.print_len = 0;
	return (list);
}

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
	t_list		list;
	int			percent;
	int			format_len;

	va_start(ap, format);
	format_len = ft_strlen((char*)format);
	while (*format)
	{
		list = make_list();
		percent = check_format((char*)format);
		if (format[percent] == '\0')
			break ;
		else if (format[percent] == '%')
		{
			if (!(ft_parser((char*)(format + percent), &ap, &list)))
				return (-1);
			if (!(ft_processor(&list, &ap)))
				return (-1);
		}
		format += percent + list.parser_len;
		format_len = format_len - list.parser_len + list.print_len;
	}
	va_end(ap);
	return (format_len);
}
