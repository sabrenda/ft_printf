/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 05:29:12 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/13 05:31:45 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_type(t_f t_flag)
{
	t_flag.type_c = 0;
	t_flag.type_s = 0;
	t_flag.type_p = 0;
	t_flag.type_i = 0;
	t_flag.type_u = 0;
	t_flag.type_x = 0;
	t_flag.type_xx = 0;
	t_flag.type_n = 0;
	t_flag.type_f = 0;
	t_flag.type_g = 0;
	t_flag.type_e = 0;
	t_flag.type_spec = 0;
}
