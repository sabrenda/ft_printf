/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:01:51 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 20:53:33 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
