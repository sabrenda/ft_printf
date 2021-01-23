/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_spec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:47:09 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 04:34:07 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_build_spec(t_f *t_flag)
{
	int		i;

	i = 0;
	t_flag->type_spec = '%';
	if (t_flag->speczero && !t_flag->minus)
		t_flag->zero = 1;
	if (t_flag->minus)
	{
		i += write(1, &t_flag->type_spec, 1);
		i += ft_width_flag_work(t_flag, 1);
	}
	else
	{
		i += ft_width_flag_work(t_flag, 1);
		i += write(1, &t_flag->type_spec, 1);
	}
	return (i);
}
