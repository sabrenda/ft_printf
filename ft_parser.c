/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 06:02:39 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/12 08:33:36 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parser(const char **str, va_list ap)
{
	t_f		t_flag;

	ft_init(t_flag);
	while (**str)
	{
		if (ft_strchr("-+ #0", **str))
			ft_parser_flags(str, t_flag);
		else if ((**str == '*' || ft_isdigit(**str)) && !(t_flag.d_flag_on))
			ft_width(str, ap, t_flag);
		else if (**str == '.')
			ft_dot(str, ap, t_flag);
		else if ((**str == 'l' || **str == 'h') && !(t_flag.lh_flag_on))
			ft_llhh(str, t_flag);
		else if (ft_strchr("cspdiuxXnfge", **str) || **str == '%')
		{
			ft_type(str, ap, t_flag);
			return (go_to_pars(str, ap));
		}
		*str++;
	}
	return (go_to_pars(str, ap));
}
