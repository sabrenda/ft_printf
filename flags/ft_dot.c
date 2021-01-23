/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:01:35 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 04:35:32 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_killbill2(t_f *t_flag)
{
	t_flag->d_flag_on = 0;
	t_flag->dot = -1;
}

void	ft_killbill(t_f *t_flag)
{
	t_flag->d_flag_on = 1;
	t_flag->dot = 0;
}

void	ft_dot(const char **str, va_list ap, t_f *t_flag)
{
	ft_killbill(t_flag);
	(*str)++;
	while (1)
	{
		if (**str == '-')
			t_flag->dot = -1;
		else if (**str == '*')
		{
			t_flag->dot = va_arg(ap, int);
			if (t_flag->dot < 0)
			{
				ft_killbill2(t_flag);
				break ;
			}
		}
		else if (**str >= '0' && **str <= '9')
			t_flag->dot = ft_atoi(str);
		t_flag->zero = 0;
		if (**str == '.')
		{
			(*str)++;
			continue ;
		}
		break ;
	}
}
