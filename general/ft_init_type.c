/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:01:51 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 04:34:54 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_init_type(t_f *t_flag)
{
	t_flag->type_c = 0;
	t_flag->type_s = 0;
	t_flag->type_p = 0;
	t_flag->type_i = 0;
	t_flag->type_u = 0;
	t_flag->type_x = 0;
	t_flag->type_spec = 0;
}
