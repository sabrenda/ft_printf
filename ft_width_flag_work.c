/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_flag_work.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:04:10 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/17 23:05:32 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_work_i(int *i, int *res, t_f *t_flag)
{
	write(1, "-", 1);
	t_flag->type_i *= -1;
	*res += 1;
}

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
	if (t_flag->zero && t_flag->type_i < 0 && i < t_flag->width)
		flag_work_i(&i, &res, t_flag);
	if (t_flag->space && c == ' ' && i < t_flag->width && !t_flag->minus)
		t_flag->width--;
	if (!t_flag->zero && t_flag->type_i >= 0
		&& i < t_flag->width && t_flag->plus && !t_flag->minus)
		i++;
	while (i < t_flag->width)
	{
		write(1, &c, 1);
		i++;
		res++;
	}
	return (res);
}
