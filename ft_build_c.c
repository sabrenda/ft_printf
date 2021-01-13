/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:34:30 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/13 07:15:13 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_build_c(va_list ap, t_f t_flag)
{
	int		i;

	i = 0;
	t_flag.type_c = va_arg(ap, int);
	if (t_flag.minus)
	{
		write(1, &t_flag.type_c, 1);
		i += ft_width_flag_work(t_flag);
	}
	else
	{
		i += ft_width_flag_work(t_flag);
		write(1, &t_flag.type_c, 1);
	}
	return (i);
}
