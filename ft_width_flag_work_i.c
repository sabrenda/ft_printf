/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_flag_work_i.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:04:10 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/20 02:51:48 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_zero_is_shit(t_f *t_flag)
{
	if (t_flag->type_i == 0 && !t_flag->dot
		&& t_flag->width > 0 && !t_flag->minus)
		t_flag->width++;
}

int		ft_width_flag_work_i(t_f *t_flag, int i)
{
	char	c;
	int		res;

	res = 0;
	c = 0;
	if (t_flag->zero)
		c = '0';
	else
		c = ' ';
	if ((t_flag->zero && t_flag->type_i < 0 && i < t_flag->width) ||
			(t_flag->type_i < 0 && (t_flag->dot + 1) >= t_flag->width))
		res += ft_flag_work_i(t_flag);
	if (t_flag->space && c == ' ' && i < t_flag->width && !t_flag->minus)
		i++;
	if (t_flag->plus && t_flag->type_i >= 0 && t_flag->width
			&& i < t_flag->width && !t_flag->minus)
		i++;
	ft_zero_is_shit(t_flag);
	while (i < t_flag->width)
	{
		write(1, &c, 1);
		i++;
		res++;
	}
	return (res);
}
