/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <aquinoa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:33:45 by aquinoa           #+#    #+#             */
/*   Updated: 2020/12/16 16:47:41 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "printf.h"

void			ft_flags_parser(t_list *list, char *str);
void			ft_precision_parser(t_list *list, char *str, va_list *ap);
void			ft_width_parser(t_list *list, char *str, va_list *ap);

#endif
