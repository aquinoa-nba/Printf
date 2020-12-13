/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:37:19 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/11 22:28:17 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_processor.h"

int		ft_processor(t_list *list, va_list *ap)
{
	int		length;

	length = 0;
	if (list->type == 'c')
		length = ft_c_type(list, &(*ap));
	if (list->type == 's' || list->type == '%')
		length = ft_s_type(list, &(*ap));
	if (list->type == 'd' || list->type == 'i')
		length = ft_d_type(list, &(*ap));
	if (list->type == 'u')
		length = ft_u_type(list, &(*ap));
	if (list->type == 'x' || list->type == 'X')
		length = ft_x_type(list, &(*ap));
	if (list->type == 'p')
		length = ft_p_type(list, &(*ap));
	return (length);
}
