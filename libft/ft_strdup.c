/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 23:39:50 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/16 17:05:32 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(char *str)
{
	int		len;
	char	*new_str;

	len = ft_strlen(str);
	if (!(new_str = (char*)malloc(len + 1)))
		return (NULL);
	new_str[len] = '\0';
	while (*str)
		*new_str++ = *str++;
	return (new_str - len);
}
