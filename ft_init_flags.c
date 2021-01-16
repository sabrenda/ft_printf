/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:01:41 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/16 07:29:35 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_flags(t_f *t_flag)
{
	t_flag->flag_on = 0;
	t_flag->minus = 0;
	t_flag->plus = 0;
	t_flag->space = 0;
	t_flag->octo = 0;
	t_flag->zero = 0;
	t_flag->width = 0;
	t_flag->d_flag_on = 0;
	t_flag->dot = -1;
	t_flag->lh_flag_on = 0;
	t_flag->up_x_zero = 0;
	t_flag->l = 0;
	t_flag->ll = 0;
	t_flag->h = 0;
	t_flag->hh = 0;
	t_flag->t_flag_on = 0;
	t_flag->type_len_x = 0;
}
