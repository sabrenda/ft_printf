/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hl_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:45:57 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/20 21:33:08 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hl_x(va_list ap, t_f *t_flag)
{
	if (t_flag->l || t_flag->ll)
	{
		t_flag->type_x = (uintmax_t)va_arg(ap, unsigned long long int);
		t_flag->type_len_x = 16;
	}
	else if (t_flag->h)
	{
		t_flag->type_x = (uintmax_t)((unsigned short)va_arg(ap, unsigned int));
		t_flag->type_len_x = 4;
	}
	else if (t_flag->hh)
	{
		t_flag->type_x = (uintmax_t)((unsigned char)va_arg(ap, unsigned int));
		t_flag->type_len_x = 2;
	}
	else
	{
		t_flag->type_x = (uintmax_t)va_arg(ap, unsigned int);
		t_flag->type_len_x = 8;
	}
}
