/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 08:42:30 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 08:47:22 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_number_len(long nb)
{
	int		count;

	if (nb <= 0)
		count = 1;
	else
		count = 0;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}
