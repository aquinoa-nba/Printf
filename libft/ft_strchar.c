/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 05:01:26 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/16 21:26:46 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	ft_strchar(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (*str);
		str++;
	}
	return (0);
}
