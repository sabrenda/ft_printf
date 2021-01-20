/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_work_i.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:40:08 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/20 02:04:29 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_flag_work_i(t_f *t_flag)
{
	if (!t_flag->minus_add)
		write(1, "-", 1);
	t_flag->minus_add = 1;
	if (t_flag->zero && !t_flag->d_flag_on)
		return (1);
	else if (t_flag->dot >= 0 && !t_flag->minus &&
		(t_flag->dot <= ((int)ft_leni(t_flag->type_i) - 1)))
		return (1);
	else if (t_flag->d_flag_on && (t_flag->dot + 1) >= t_flag->width)
		return (0);
	else
		return (1);
}
