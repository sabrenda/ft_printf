/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:02:49 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/15 00:27:47 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_parser(const char **str, va_list ap)
{
	t_f		t_flag;

	ft_init_flags(&t_flag);
	ft_init_type(&t_flag);
	while (**str != '\0')
	{
		if (ft_strchr("-+ #0", **str))
			ft_parser_flags(str, &t_flag);
		else if ((**str == '*' || ft_isdigit(str)))
			ft_width(str, ap, &t_flag);
		else if (**str == '.')
			ft_dot(str, ap, &t_flag);
		if ((**str == 'l' || **str == 'h') && !(t_flag.lh_flag_on))
			ft_llhh(str, &t_flag);
		if (ft_strchr("cspdiuxXnfge", **str) || **str == '%')
			return (ft_type(str, ap, &t_flag));
		if (**str == '\0')
			break ;
		(*str)++;
	}
	return (ft_type(str, ap, &t_flag));
}
