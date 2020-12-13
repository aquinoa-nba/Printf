/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processor.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:33:36 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/11 20:16:28 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROCESSOR_H
# define FT_PROCESSOR_H

# include "ft_parser.h"

int		ft_c_type(t_list *list, va_list *ap);
int		ft_s_type(t_list *list, va_list *ap);
int		ft_d_type(t_list *list, va_list *ap);
int		ft_u_type(t_list *list, va_list *ap);
int		ft_x_type(t_list *list, va_list *ap);
int		ft_p_type(t_list *list, va_list *ap);

#endif
