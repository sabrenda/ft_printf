/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:02:37 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 04:34:58 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
	else if (**str == '0' && !(t_flag->d_flag_on))
		ft_zero(t_flag);
}
