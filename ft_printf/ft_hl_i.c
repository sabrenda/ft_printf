/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hl_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:54:22 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 22:16:32 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hl_i(va_list ap, t_f *t_flag)
{
	if (t_flag->ll)
		t_flag->type_i = (intmax_t)va_arg(ap, long long int);
	else if (t_flag->l)
		t_flag->type_i = (intmax_t)va_arg(ap, long int);
	else if (t_flag->h)
		t_flag->type_i = (intmax_t)((short)va_arg(ap, int));
	else if (t_flag->hh)
		t_flag->type_i = (intmax_t)((signed char)va_arg(ap, int));
	else
		t_flag->type_i = (intmax_t)va_arg(ap, int);
	if (t_flag->type_i < 0)
	{
		t_flag->space = 0;
		t_flag->plus = 0;
	}
}
