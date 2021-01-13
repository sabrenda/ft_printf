/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:02:37 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/13 15:53:54 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parser_flags(const char **str, t_f *t_flag)
{
	t_flag->flag_on = 1;
	if (**str == '-')
		ft_minus(t_flag);
	else if (**str == '+')
		ft_plus(t_flag);
	else if (**str == ' ')
		ft_space(t_flag);
	else if (**str == '#')
		ft_octothorpe(t_flag);
	else if (**str == '0')
		ft_zero(t_flag);
}
