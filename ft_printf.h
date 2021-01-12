/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 15:55:06 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/12 08:35:46 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct	s_flag
{
	int			flag_on;
	int			minus;
	int			plus;
	int			space;
	int			octothorpe;
	int			zero;
	int			w_flag_on;
	int			width;
	int			d_flag_on;
	int			dot;
	int			lh_flag_on;
	int			l;
	int			ll;
	int			h;
	int			hh;
	int			t_flag_on;
	char		type;
}				t_f;

int				ft_printf(const char *str, ...);
int				ft_work_printf(const char *str, va_list ap);
int				ft_parser(const char **str, va_list ap);
void			ft_init(t_f t_flag);
void			ft_minus(t_f t_flag);
void			ft_plus(t_f t_flag);
void			ft_space(t_f t_flag);
void			ft_octothorpe(t_f t_flag);
void			ft_zero(t_f t_flag);
void			ft_parser_flags(const char **str, t_f t_flag);
void			ft_width(const char **str, va_list ap, t_f t_flag);
void			ft_dot(const char **str, va_list ap, t_f t_flag);
void			ft_llhh(const char **str, t_f t_flag);
void			ft_type(const char **str, va_list ap, t_f t_flag);
char			*ft_strchr(const char *s, int c);
int				ft_atoi(const char **str);

#endif
