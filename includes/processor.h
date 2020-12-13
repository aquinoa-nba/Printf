/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processor.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:33:36 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 18:02:15 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROCESSOR_H
# define PROCESSOR_H

# include "parser.h"

int		ft_c_type(t_list *list, va_list *ap);
int		ft_s_type(t_list *list, va_list *ap);
int		ft_d_type(t_list *list, va_list *ap);
int		ft_u_type(t_list *list, va_list *ap);
int		ft_x_type(t_list *list, va_list *ap);
int		ft_p_type(t_list *list, va_list *ap);
int		ft_print_width(t_list *list, int print_len);
int		ft_print_precision(t_list *list, int print_len);

#endif
