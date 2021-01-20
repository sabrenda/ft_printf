/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 19:16:38 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/20 00:26:09 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_build_i(va_list ap, t_f *t_flag)
{
	int		i;

	i = 0;
	ft_hl_i(ap, t_flag);
	if (!t_flag->minus)
		ft_dot_add_two(t_flag);
	if (t_flag->minus)
	{
		if (t_flag->plus || t_flag->space)
			i += ft_plus_add(t_flag);
		i += ft_dot_add_i(t_flag);
		i += ft_putin(t_flag);
		return (i += ft_width_flag_work_i(t_flag, i));
	}
	else
	{
		if ((t_flag->plus || t_flag->space) && t_flag->zero)
			i += ft_plus_add(t_flag);
		i += ft_width_flag_work_i(t_flag, t_flag->dota + t_flag->add);
		if ((t_flag->plus || t_flag->space) && !t_flag->zero)
			i += ft_plus_add(t_flag);
		i += ft_dot_add_i(t_flag);
		return (i += ft_putin(t_flag));
	}
}
