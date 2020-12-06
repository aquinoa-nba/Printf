/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processor.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:33:36 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/06 16:42:09 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROCESSOR_H
# define PROCESSOR_H

#include "ft_parser.h"

int		ft_c_type(t_list *list, va_list *ap);
int		ft_s_type(t_list *list, va_list *ap);

#endif