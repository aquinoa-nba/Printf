/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 17:54:53 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 01:54:25 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_parser.h"

int		ft_flags_parser(t_list *list, char *str)
{
	int		flags_length;

	flags_length = 0;
	if (*str == '-')
		list->flags = '-';
	else if (*str == '0')
		list->flags = '0';
	while (str[flags_length] == '-' || str[flags_length] == '0')
		flags_length++;
	return (flags_length);
}
