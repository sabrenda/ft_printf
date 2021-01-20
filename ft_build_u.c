/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 03:40:26 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/20 03:07:26 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_build_u(va_list ap, t_f *t_flag)
{
	unsigned int	i;

	i = 0;
	ft_hl_u(ap, t_flag);
	if (!t_flag->minus)
		ft_dot_add_twou(t_flag);
	if (t_flag->minus)
	{
		i += ft_dot_add_u(t_flag);
		i += ft_putinu(t_flag);
		return (i += ft_width_flag_work(t_flag, i));
	}
	else
	{
		i += ft_width_flag_work(t_flag, t_flag->dota);
		i += ft_dot_add_u(t_flag);
		return (i += ft_putinu(t_flag));
	}
}
