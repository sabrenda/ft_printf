/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 19:37:55 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/12 08:20:22 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dot(const char **str, va_list ap, t_f t_flag)
{
	t_flag.d_flag_on = 1;
	t_flag.dot = 0;
	*str++;
	while (1)
	{
		if (**str == '-')
			t_flag.dot = 0;
		else if (**str == '*')
			t_flag.dot = va_arg(ap, int);
		else if (ft_isdigit(*str))
			t_flag.dot = ft_atoi(str);
		if (t_flag.dot < 0)
			t_flag.dot = 0;
		break ;
	}
}
