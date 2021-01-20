/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_flag_work_s.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 00:44:42 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/19 00:53:27 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_width_flag_work_s(t_f *t_flag, int i)
{
	char	c;
	int		res;

	res = 0;
	c = 0;
	if (t_flag->zero)
		c = '0';
	else
		c = ' ';
	while (i < t_flag->width)
	{
		write(1, &c, 1);
		i++;
		res++;
	}
	return (res);
}
