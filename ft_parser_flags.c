/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 00:29:20 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/11 00:13:58 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parser_flags(const char **str, t_flags t_flags1)
{
	if (**str == '-')
		ft_minus(t_flags1);
	else if (**str == '+')
		ft_plus(t_flags1);
	else if (**str == ' ')
		ft_space(t_flags1);
	else if (**str == '#')
		ft_octothorpe(t_flags1);
	else if (**str == '0')
		ft_zero(t_flags1);
}
