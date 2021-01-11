/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 15:55:06 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/11 06:38:50 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct	s_flags
{
	int			flags_on;
	int			minus;
	int			plus;
	int			space;
	int			octothorpe;
	int			zero;
}				t_flags;

typedef struct	s_width
{
	int			flags_on;
	int			width;
	int			star;
	int			width_end;
}				t_width;

typedef struct	s_dot
{
	int			flags_on;
	int			dot;
	int			star;
	int			dot_end;
}				t_dot;

typedef struct	s_type
{
	int			type_on;
	char		type;
	int			end_flags;
}				t_type;

int				ft_printf(const char *str, ...);
int				ft_work_printf(const char *str, va_list print_va);
int				ft_parser(const char **str, va_list print_va);
void			ft_flags_i(t_flags ,t_width ,t_dot ,t_type);
int				ft_parser_flags(const char **str, t_flags t_flags1);
void			ft_parser_width(const char **str, va_list print_va);
void			ft_parser_dot(const char **str, va_list print_va);
void			ft_parser_size(const char **str);
void			ft_parser_type(const char **str, va_list print_va);

#endif
