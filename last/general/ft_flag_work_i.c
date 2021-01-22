/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_work_i.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 22:14:15 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 04:34:20 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_flag_work_i(t_f *t_flag)
{
	if (!t_flag->minus_add)
		write(1, "-", 1);
	if (t_flag->minus_add)
		return (0);
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
