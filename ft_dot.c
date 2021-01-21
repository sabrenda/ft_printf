/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:01:35 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 20:54:37 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dot(const char **str, va_list ap, t_f *t_flag)
{
	t_flag->d_flag_on = 1;
	t_flag->dot = 0;
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
				t_flag->d_flag_on = 0;
				t_flag->dot = -1;
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
