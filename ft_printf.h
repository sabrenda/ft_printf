/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:03:08 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 03:37:21 by sabrenda         ###   ########.fr       */
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
void			ft_init_flags(t_f *t_flag);
void			ft_init_type(t_f *t_flag);
void			ft_minus(t_f *t_flag);
void			ft_plus(t_f *t_flag);
void			ft_space(t_f *t_flag);
void			ft_octothorpe(t_f *t_flag);
void			ft_zero(t_f *t_flag);
void			ft_parser_flags(const char **str, t_f *t_flag);
void			ft_width(const char **str, va_list ap, t_f *t_flag);
void			ft_dot(const char **str, va_list ap, t_f *t_flag);
void			ft_llhh(const char **str, t_f *t_flag);
int				ft_type(const char **str, va_list ap, t_f *t_flag);
int				ft_build_c(va_list ap, t_f *t_flag);
int				ft_build_s(va_list ap, t_f *t_flag);
int				ft_build_spec(va_list ap, t_f *t_flag);
int				ft_build_p(va_list ap, t_f *t_flag);
int				ft_build_x(char x, va_list ap, t_f *t_flag);
int				ft_build_i(va_list ap, t_f *t_flag);
int				ft_build_u(va_list ap, t_f *t_flag);
int				ft_width_flag_work(t_f *t_flag, int i);
int				ft_putlstr(char *s, int dot);
int				ft_strchr(const char *s, int c);
int				ft_atoi(const char **str);
char			*ft_strdup(const char *str);
int				ft_isdigit(const char **ch);
void			ft_bzero(void *s, size_t n);
char			ft_goto_hexadecimal(unsigned int x);
unsigned int	ft_strlen(const char *str);
char			*ft_hexadecimal(unsigned long long int x, unsigned int len_x);

#endif
