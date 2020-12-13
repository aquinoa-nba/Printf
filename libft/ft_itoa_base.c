/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 18:27:19 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 03:43:27 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoa_base(long nb, long base, t_list *list)
{
	long		n;
	int			nb_len;
	char		*str;

	n = nb;
	nb_len = 1;
	while (nb >= base && nb_len++)
		nb /= base;
	nb = n;
	str = malloc(nb_len + 1);
	str[nb_len] = '\0';
	while (nb_len)
	{
		nb %= base;
		if (base >= 10 && nb >= 10)
			str[nb_len - 1] = (list->type == 'X' ? nb + 55 : nb + 87);
		else
			str[nb_len - 1] = nb + 48;
		n /= base;
		nb = n;
		nb_len--;
	}
	return (str);
}
