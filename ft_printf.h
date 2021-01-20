/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:03:08 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/20 03:35:19 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct				s_flag
{
	int						minus;
	int						plus;
	int						space;
	int						octo;
	int						zero;
	int						width;
	int						dot;
	int						flag_on;
	int						lh_flag_on;
	int						d_flag_on;
	int						t_flag_on;
	int						l;
	int						ll;
	int						h;
	int						hh;
	int						up_x_zero;
	int						type_len_x;
	int						add;
	int						dota;
	int						minus_add;
	char					*type_s;
	char					type_c;
	char					type_spec;
	intmax_t				type_i;
	uintmax_t				type_u;
	unsigned long long int	type_p;
	unsigned long long int	type_x;
}							t_f;

int							ft_printf(const char *str, ...);
int							ft_work_printf(const char **str, va_list ap);
int							ft_parser(const char **str, va_list ap);
int							ft_type(const char **str, va_list ap, t_f *t_flag);
int							ft_build_c(va_list ap, t_f *t_flag);
int							ft_build_s(va_list ap, t_f *t_flag);
int							ft_build_spec(t_f *t_flag);
int							ft_build_u(va_list ap, t_f *t_flag);
int							ft_build_i(va_list ap, t_f *t_flag);
int							ft_build_p(va_list ap, t_f *t_flag);
int							ft_build_x(char x, va_list ap, t_f *t_flag);
int							ft_width_flag_work(t_f *t_flag, int i);
int							ft_width_flag_work_i(t_f *t_flag, int i);
int							ft_width_flag_work_s(t_f *t_flag, int i);
int							ft_putlstr(char *s, int dot);
int							ft_putlstrx(t_f *t_flag, int dot);
int							ft_strchr(const char *s, int c);
int							ft_atoi(const char **str);
int							ft_isdigit(const char **ch);
int							ft_putnbru(uintmax_t nb);
int							ft_putin(t_f *t_flag);
int							ft_putinu(t_f *t_flag);
int							ft_putnbr1(intmax_t nb);
int							ft_putnbr2(intmax_t nb);
int							ft_plus_add(t_f *t_flag);
int							ft_zero_and_x(void);
int							ft_zero_and_xx(t_f *t_flag);
int							ft_dot_add_i(t_f *t_flag);
int							ft_dot_add_u(t_f *t_flag);
int							ft_dot_add_x(t_f *t_flag);
void						ft_dot(const char **str, va_list ap, t_f *t_flag);
void						ft_dot_add_two(t_f *t_flag);
void						ft_dot_add_twou(t_f *t_flag);
void						ft_dot_add_xtwo(t_f *t_flag);
void						ft_init_flags(t_f *t_flag);
void						ft_init_type(t_f *t_flag);
void						ft_parser_flags(const char **str, t_f *t_flag);
void						ft_minus(t_f *t_flag);
void						ft_plus(t_f *t_flag);
void						ft_space(t_f *t_flag);
void						ft_octothorpe(t_f *t_flag);
void						ft_zero(t_f *t_flag);
void						ft_width(const char **str, va_list ap, t_f *t_flag);
void						ft_toupper(char *ch, t_f *t_flag);
void						ft_llhh(const char **str, t_f *t_flag);
void						ft_hl_i(va_list ap, t_f *t_flag);
void						ft_hl_u(va_list ap, t_f *t_flag);
void						ft_hl_x(va_list ap, t_f *t_flag);
void						ft_zero_is_shit(t_f *t_flag);
void						ft_bzero(void *s, size_t n);
int							ft_flag_work_i(t_f *t_flag);
char						*ft_strdup(const char *str);
char						*ft_hexadecimal(unsigned long long int x, unsigned int len_x);
char						*ft_hexadecimal_p(unsigned long long int x);
char						ft_goto_hexadecimal(unsigned int x);
unsigned int				ft_strlen(const char *str);
unsigned int				ft_leni(intmax_t s);
unsigned int				ft_lenu(uintmax_t s);
unsigned int				ft_slen(char *s);

#endif
