/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 06:02:39 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/11 06:57:49 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parser(const char **str, va_list print_va)
{
	t_flags	t_flags1;
	t_width	t_width1;
	t_dot	t_dot1;
	t_type	t_t;

	ft_flags_i(t_flags1, t_width1, t_dot1, t_t);
	while (**str)
	{
		if (ft_strchr("-+ #0", **str))
			ft_parser_flags(str, t_flags1);
		else if ((**str == '*' || ft_isdigit(**str)) && !t_width1.flags_on)
			ft_parser_width(str, print_va);
		else if (**str == '.')
			ft_parser_dot(str, print_va);
		else if (**str == 'l' || **str == 'h')
			ft_parser_size(str);
		else if (ft_strchr("cspdiuxXnfge", **str) || **str == '%')
		{
			ft_parser_type(str, print_va, t_t);
			return (go_to_pars(str, print_va)));
		}
		*str++;
	}
	return (go_to_pars(str, print_va));
}
