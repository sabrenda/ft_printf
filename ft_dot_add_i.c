/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot_add_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:54:48 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/20 01:51:25 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_dot_add_i(t_f *t_flag)
{
	int i;
	int a;

	a = 0;
	if (t_flag->dot == -1)
		return (0);
	if (t_flag->type_i >= 0)
		i = t_flag->dot - ft_leni(t_flag->type_i);
	else
		i = t_flag->dot - (ft_leni(t_flag->type_i) - 1);
	if (i <= 0)
		return (0);
	if (t_flag->type_i < 0 && i <= t_flag->width)
		ft_flag_work_i(t_flag);
	while (a < i)
	{
		write(1, "0", 1);
		a++;
	}
	if (t_flag->minus_add)
		i++;
	return (i);
}
