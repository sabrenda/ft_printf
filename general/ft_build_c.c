/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:43:57 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 04:33:56 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_build_c(va_list ap, t_f *t_flag)
{
	int		i;

	i = 0;
	t_flag->type_c = va_arg(ap, int);
	if (t_flag->minus)
	{
		i += write(1, &t_flag->type_c, 1);
		i += ft_width_flag_work(t_flag, 1);
	}
	else
	{
		i += ft_width_flag_work(t_flag, 1);
		i += write(1, &t_flag->type_c, 1);
	}
	return (i);
}
