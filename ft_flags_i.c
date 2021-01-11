/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:03:46 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/11 05:43:40 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flags_i(t_flags t_flags1, t_width t_width1, t_dot t_dot1, t_type t_t)
{
	t_flags1.flags_on = 0;
	t_flags1.minus = 0;
	t_flags1.plus = 0;
	t_flags1.space = 0;
	t_flags1.octothorpe = 0;
	t_flags1.zero = 0;
	t_flags1.flags_end = 0;
	t_width1.flags_on = 0;
	t_width1.width = 0;
	t_width1.star = 0;
	t_width1.width_end = 0;
	t_dot1.flags_on = 0;
	t_dot1.dot = -1;
	t_dot1.star = 0;
	t_dot1.dot_end = 0;
	t_t.type_on = 0;
	t_t.type = 0;
	t_t.end_flags = 0;
}
