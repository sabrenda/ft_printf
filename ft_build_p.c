/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 02:41:33 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 20:50:34 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_build_p(va_list ap, t_f *t_flag)
{
	int		i;

	i = 0;
	t_flag->type_p = va_arg(ap, unsigned long long int);
	if (!(t_flag->type_s = ft_hexadecimal_p(t_flag->type_p)))
		t_flag->type_s = "(null)";
	if (t_flag->minus)
	{
		i += ft_zero_and_x();
		i += ft_putlstr(t_flag->type_s, ft_strlen(t_flag->type_s));
		return (i += ft_width_flag_work(t_flag, i));
	}
	else
	{
		if (t_flag->zero)
			i += ft_zero_and_x();
		i += ft_width_flag_work(t_flag, ft_strlen(t_flag->type_s) + 2);
		if (!(t_flag->zero))
			i += ft_zero_and_x();
		return (i += ft_putlstr(t_flag->type_s, ft_strlen(t_flag->type_s)));
	}
}
