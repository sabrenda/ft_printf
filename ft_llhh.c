/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llhh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 00:35:34 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/12 07:57:03 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_llhh(const char **str, t_f t_flag)
{
	t_flag.lh_flag_on = 1;
	if (**str == 'l')
	{
		if (**str + 1 == 'l')
		{
			t_flag.ll = 1;
			*str++;
		}
		else
			t_flag.l = 1;
	}
	else
	{
		if (**str + 1 == 'h')
		{
			t_flag.hh = 1;
			*str++;
		}
		else
			t_flag.h = 1;
	}
}
