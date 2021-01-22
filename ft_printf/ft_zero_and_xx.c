/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_and_xx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:44:40 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 22:18:30 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_zero_and_xx(t_f *t_flag)
{
	if (t_flag->type_x)
	{
		if (t_flag->up_x_zero)
		{
			write(1, "0X", 2);
			return (2);
		}
		else
		{
			write(1, "0x", 2);
			return (2);
		}
	}
	t_flag->octo = 0;
	return (0);
}
