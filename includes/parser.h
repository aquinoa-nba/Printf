/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:33:45 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/13 11:38:04 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "printf.h"

int			ft_flags_parser(t_list *list, char *str);
int			ft_precis_parcer(t_list *list, char *str, va_list *ap);
int			ft_width_parcer(t_list *list, char *str, va_list *ap);
int			ft_processor(t_list *list, va_list *ap);

#endif