/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 05:01:26 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/08 19:28:04 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	ft_strchar(char *str, char c)
{
	int		i;

	i = 0;
	if (!str || !c)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (str[i]);
		i++;
	}
	return (0);
}
