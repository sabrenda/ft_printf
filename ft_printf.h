/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 15:55:06 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/13 07:17:32 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include "ft_struct.h"

int				ft_printf(const char *str, ...);
int				ft_work_printf(const char **str, va_list ap);
int				ft_parser(const char **str, va_list ap);
void			ft_init_flags(t_f t_flag);
void			ft_init_type(t_f t_flag);
void			ft_minus(t_f t_flag);
void			ft_plus(t_f t_flag);
void			ft_space(t_f t_flag);
void			ft_octothorpe(t_f t_flag);
void			ft_zero(t_f t_flag);
void			ft_parser_flags(const char **str, t_f t_flag);
void			ft_width(const char **str, va_list ap, t_f t_flag);
void			ft_dot(const char **str, va_list ap, t_f t_flag);
void			ft_llhh(const char **str, t_f t_flag);
int				ft_type(const char **str, va_list ap, t_f t_flag);
int				ft_build_c(va_list ap, t_f t_flag);
int				ft_width_flag_work(t_f t_flag);
int				ft_strchr(const char *s, int c);
int				ft_atoi(const char **str);
char			*ft_strdup(const char *str);
int				ft_isdigit(const char **ch);

#endif
