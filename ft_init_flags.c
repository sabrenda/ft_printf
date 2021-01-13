/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:03:46 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/13 05:27:57 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_flags(t_f t_flag)
{
	t_flag.flag_on = 0;
	t_flag.minus = 0;
	t_flag.plus = 0;
	t_flag.space = 0;
	t_flag.octothorpe = 0;
	t_flag.zero = 0;
	t_flag.width = 0;
	t_flag.d_flag_on = 0;
	t_flag.dot = 0;
	t_flag.lh_flag_on = 0;
	t_flag.l = 0;
	t_flag.ll = 0;
	t_flag.h = 0;
	t_flag.hh = 0;
	t_flag.t_flag_on = 0;
}
