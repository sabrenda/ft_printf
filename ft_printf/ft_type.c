/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:03:58 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 22:18:12 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_type(const char **str, va_list ap, t_f *t_flag)
{
	int		count;

	count = 0;
	if (**str == 'c')
		count += ft_build_c(ap, t_flag);
	if (**str == 's')
		count += ft_build_s(ap, t_flag);
	if (**str == '%')
		count = ft_build_spec(t_flag);
	if (**str == 'p')
		count = ft_build_p(ap, t_flag);
	if (**str == 'x' || **str == 'X')
		count = ft_build_x(**str, ap, t_flag);
	if (**str == 'd' || **str == 'i')
		count = ft_build_i(ap, t_flag);
	if (**str == 'u')
		count = ft_build_u(ap, t_flag);
	return (count);
}
