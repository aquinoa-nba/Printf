/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:23:41 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/16 22:30:22 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft.h"

int		ft_printf(const char *format, ...);
int		ft_parser(char *str, va_list *ap, t_list *list);
int		ft_processor(t_list *list, va_list *ap);

#endif
