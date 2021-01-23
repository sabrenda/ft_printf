/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plus_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:52:11 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 04:33:35 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_plus_add(t_f *t_flag)
{
	if (t_flag->plus)
	{
		write(1, "+", 1);
		t_flag->add = 1;
		return (1);
	}
	if (t_flag->space)
	{
		write(1, " ", 1);
		t_flag->add = 1;
		return (1);
	}
	return (0);
}
