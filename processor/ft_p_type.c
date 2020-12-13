/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 19:24:58 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 11:39:20 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/processor.h"

int		print_p(char *nb_base, int print_len, t_list *list)
{
	if (list->flags == '-')
	{
		ft_putstr(nb_base);
		print_len = ft_print_width(list, print_len);
	}
	else
	{
		print_len = ft_print_width(list, print_len);
		ft_putstr(nb_base);
	}
	return (print_len);
}

int		ft_p_type(t_list *list, va_list *ap)
{
	long			nb;
	char			*nb_base;
	int				print_len;
	char			*tmp;

	nb = va_arg(*ap, long);
	nb_base = ft_itoa_base(nb, 16, list);
	if (list->precision == 0)
		nb_base = ft_strjoin("0x", "");
	else
	{
		tmp = nb_base;
		nb_base = ft_strjoin("0x", tmp);
		free(tmp);
	}
	print_len = ft_strlen(nb_base);
	list->width = (print_len < list->width ? list->width - print_len : 0);
	print_len = print_p(nb_base, print_len, list);
	free(nb_base);
	return (print_len);
}
