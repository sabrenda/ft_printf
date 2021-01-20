/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_spec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 02:01:31 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 22:27:51 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_build_spec(t_f *t_flag)
{
	int		i;

	i = 0;
	t_flag->type_spec = '%';
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
