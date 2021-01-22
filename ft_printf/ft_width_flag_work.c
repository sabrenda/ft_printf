/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_flag_work.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:04:10 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 22:18:16 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_width_flag_work(t_f *t_flag, int i)
{
	char	c;
	int		res;

	res = 0;
	c = 0;
	if (t_flag->zero)
		c = '0';
	else
		c = ' ';
	if (!t_flag->type_u && !t_flag->type_x && !t_flag->dot
		&& !t_flag->type_c && t_flag->width > 0 && !t_flag->minus
			&& !t_flag->type_spec && !t_flag->type_p)
		t_flag->width++;
	while (i < t_flag->width)
	{
		write(1, &c, 1);
		i++;
		res++;
	}
	return (res);
}
