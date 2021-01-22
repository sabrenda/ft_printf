/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llhh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:02:10 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 22:17:21 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_llhh(const char **str, t_f *t_flag)
{
	t_flag->lh_flag_on = 1;
	if (**str == 'l')
	{
		if (**str + 1 == 'l')
		{
			t_flag->ll = 1;
			(*str)++;
		}
		else
			t_flag->l = 1;
	}
	else
	{
		if (**str + 1 == 'h')
		{
			t_flag->hh = 1;
			(*str)++;
		}
		else
			t_flag->h = 1;
	}
}