/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 17:54:53 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/06 17:55:01 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_parser.h"

int		count_minus(char *str)
{
	int		count;

	count = 0;
	while(str[count] == '-')
		count++;
	if (str[count] == '0')
		return (0);
	return (count);
}

int		count_zero(char *str)
{
	int		count;

	count = 0;
	while(str[count] == '0')
		count++;
	if (str[count] == '-')
		return (0);
	return (count);
}

int		ft_flags_parser(t_list *list, char *str)
{
	int		flags_length;

	flags_length = 0;
	if (*str == '-' )
	{
		if (!(flags_length = count_minus(str)))
			return (-1);
		list->flags = '-';
	}
	else if (*str == '0')
	{
		if (!(flags_length = count_zero(str)))
			return (-1);
		list->flags = '0';
	}
	return (flags_length);
}
