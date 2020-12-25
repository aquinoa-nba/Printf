/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 19:26:23 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/16 22:30:47 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char *str1, char *str2)
{
	int		str1_len;
	int		str2_len;
	char	*res;
	int		res_len;

	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	res_len = str1_len + str2_len;
	if (!(res = (char*)malloc(res_len + 1)))
		return (NULL);
	res[res_len] = '\0';
	while (*str1)
		*res++ = *str1++;
	while (*str2)
		*res++ = *str2++;
	free(str2 - str2_len);
	return (res - res_len);
}
