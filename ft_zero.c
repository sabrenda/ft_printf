/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:10:38 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 05:04:00 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_zero(t_f *t_flag)
{
	if (t_flag->minus == 1)
		t_flag->zero = 0;
	else
	{
		t_flag->zero = 1;
		t_flag->speczero = 1;
	}
}
