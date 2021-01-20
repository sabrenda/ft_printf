/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:04:27 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/20 03:34:40 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_build_x(char x, va_list ap, t_f *t_flag)
{
	int		i;

	i = 0;
	ft_hl_x(ap, t_flag);
	t_flag->type_s = ft_hexadecimal(t_flag->type_x, t_flag->type_len_x);
	if (x == 'X')
		ft_toupper(t_flag->type_s, t_flag);
	if (!t_flag->minus)
		ft_dot_add_xtwo(t_flag);
	if (t_flag->minus)
	{
		if (t_flag->octo && t_flag->type_x)
			i += ft_zero_and_xx(t_flag);
		i += ft_dot_add_x(t_flag);
		i += ft_putlstrx(t_flag, ft_slen(t_flag->type_s));
		return (i += ft_width_flag_work(t_flag, i));
	}
	if (t_flag->octo && t_flag->zero)
		i += ft_zero_and_xx(t_flag);
	i += ft_width_flag_work(t_flag, t_flag->dota + t_flag->octo);
	if (t_flag->octo && !(t_flag->zero))
		i += ft_zero_and_xx(t_flag);
	i += ft_dot_add_x(t_flag);
	return (i += ft_putlstrx(t_flag, ft_slen(t_flag->type_s)));
}
