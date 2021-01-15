/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 02:41:33 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/15 08:57:12 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_zero_and_x(void)
{
	write(1, "0x", 2);
	return (2);
}

int		ft_build_p(va_list ap, t_f *t_flag)
{
	int		i;

	i = 0;
	t_flag->type_p = va_arg(ap, unsigned long long int);
	if (!(t_flag->type_s = ft_hexadecimal(t_flag->type_p)))
		t_flag->type_s = "(null)";
	if (t_flag->minus)
	{
		i += ft_zero_and_x();
		i += ft_putlstr(t_flag->type_s, ft_strlen(t_flag->type_s));
		i += ft_width_flag_work(t_flag, i);
	}
	else
	{
		i += ft_width_flag_work(t_flag, ft_strlen(t_flag->type_s) + 2);
		i += ft_zero_and_x();
		i += ft_putlstr(t_flag->type_s, ft_strlen(t_flag->type_s));
	}
	free(t_flag->type_s);
	return (i);
}
