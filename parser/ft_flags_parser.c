/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 17:54:53 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/15 22:45:52 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/parser.h"

void	ft_flags_parser(t_list *list, char *str)
{
	int		flags_length;

	flags_length = 0;
	if (*str == '-')
	{
		list->flags = '-';
		while (str[flags_length] == '-')
			flags_length++;
	}
	else if (*str == '0')
	{
		list->flags = '0';
		while (str[flags_length] == '0')
			flags_length++;
	}
	while (str[flags_length] == '-' || str[flags_length] == '0')
	{
		list->flags = 'f';
		flags_length++;
	}
	list->parser_len += flags_length;
}
