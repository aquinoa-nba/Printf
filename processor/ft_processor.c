/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:37:19 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/25 18:32:12 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

int		ft_processor(t_list *list, va_list *ap)
{
	if (list->type == 'c')
		if (!(ft_c_type(list, &(*ap))))
			return (0);
	if (list->type == 's' || list->type == '%')
		if (!(ft_s_type(list, &(*ap))))
			return (0);
	if (list->type == 'd' || list->type == 'i' || list->type == 'u')
		if (!(ft_d_type(list, &(*ap))))
			return (0);
	if (list->type == 'x' || list->type == 'X')
		if (!(ft_x_type(list, &(*ap))))
			return (0);
	if (list->type == 'p')
		if (!(ft_p_type(list, &(*ap))))
			return (0);
	return (1);
}
