/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 21:06:09 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/10 01:06:48 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr(long nb)
{
	static int		count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
	}
	if (nb >= 10)
	{
		count++;
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}
