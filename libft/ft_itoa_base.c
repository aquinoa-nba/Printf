/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 18:27:19 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/11 04:21:22 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_res(unsigned int nb, int base, char *str, t_list *list)
{
	static int	i;

	if (nb >= 10)
	{
		if (base < 10)
			ft_res(nb / base, base, str, list);
		else
		{
			str[i] = list->type == 'x' ? nb + 87 : nb + 55;
			i++;
		}
		return (0);
	}
	str[i] = nb + 48;
	i++;
	return (0);
}

void	ft_putnbr_base(unsigned int nb, int base, char *str, t_list *list)
{
	if (nb > (unsigned int)base)
		ft_putnbr_base(nb / base, base, str, list);
	ft_res(nb % base, base, str, list);
}

char	*ft_str(unsigned int nb, int base)
{
	char	*str;
	int		len;

	len = 1;
	while (nb > (unsigned int)base)
	{
		nb /= base;
		len++;
	}
	str = malloc(len + 1);
	str[len] = '\0';
	return (str);
}

char	*ft_itoa_base(unsigned int nb, int base, t_list *list)
{
	char	*str;

	str = ft_str(nb, base);
	ft_putnbr_base(nb, base, str, list);
	return (str);
}
