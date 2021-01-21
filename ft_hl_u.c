/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hl_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:48:25 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 01:59:19 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hl_u(va_list ap, t_f *t_flag)
{
	if (t_flag->ll)
		t_flag->type_u = (uintmax_t)va_arg(ap, unsigned long long int);
	else if (t_flag->l)
		t_flag->type_u = (uintmax_t)va_arg(ap, unsigned long);
	else if (t_flag->h)
		t_flag->type_u = (uintmax_t)((unsigned short)va_arg(ap, unsigned int));
	else if (t_flag->hh)
		t_flag->type_u = (uintmax_t)((unsigned char)va_arg(ap, unsigned int));
	else
		t_flag->type_u = (uintmax_t)va_arg(ap, unsigned int);
}
