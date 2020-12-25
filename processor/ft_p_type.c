/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 19:24:58 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/16 22:28:16 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

void	print_p(char *nb_base, t_list *list)
{
	if (list->flags == '-')
	{
		ft_putstr(nb_base);
		ft_print_width(list);
	}
	else
	{
		ft_print_width(list);
		ft_putstr(nb_base);
	}
}

int		ft_p_type(t_list *list, va_list *ap)
{
	long			nb;
	char			*nb_base;

	nb = va_arg(*ap, long);
	if (!(nb_base = ft_itoa_base(nb, 16, list)))
		return (0);
	if (!nb && !list->precision)
	{
		free(nb_base);
		if (!(nb_base = ft_strdup("0x")))
			return (0);
	}
	else
	{
		if (!(nb_base = ft_strjoin("0x", nb_base)))
			return (0);
	}
	list->print_len = ft_strlen(nb_base);
	list->width = (list->print_len < list->width ?
											list->width - list->print_len : 0);
	print_p(nb_base, list);
	free(nb_base);
	return (1);
}
