/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 17:54:53 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/10 00:22:12 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_parser.h"

int		count_minus(t_list *list, char *str)
{
	static int		count;

	count = 0;
	while (str[count] == '-')
		count++;
	if (str[count] == '0')
		return (count + ft_flags_parser(list, str + count));
	return (count);
}

int		count_zero(t_list *list, char *str)
{
	static int		count;

	count = 0;
	while (str[count] == '0')
		count++;
	if (str[count] == '-')
		return (count + ft_flags_parser(list, str + count));
	return (count);
}

int		ft_flags_parser(t_list *list, char *str)
{
	static int		flags_length;

	flags_length = 0;
	if (*str == '-')
	{
		flags_length = count_minus(list, str);
		list->flags = '-';
	}
	else if (*str == '0')
	{
		flags_length = count_zero(list, str);
		list->flags = '0';
	}
	return (flags_length);
}
