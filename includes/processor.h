/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processor.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:33:36 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/25 18:40:27 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROCESSOR_H
# define PROCESSOR_H

# include "parser.h"

int		ft_c_type(t_list *list, va_list *ap);
int		ft_d_type(t_list *list, va_list *ap);
int		ft_p_type(t_list *list, va_list *ap);
void	ft_print_precision(t_list *list);
void	ft_print_width(t_list *list);
int		ft_s_type(t_list *list, va_list *ap);
int		ft_x_type(t_list *list, va_list *ap);

#endif
