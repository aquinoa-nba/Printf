/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 10:32:56 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 11:39:29 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

int		ft_print_width(t_list *list, int print_len)
{
	while (list->width-- > 0 && ++print_len)
		ft_putchar(' ');
	return (print_len);
}
