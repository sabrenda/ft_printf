/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:54:47 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/12 08:56:29 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type(const char **str, va_list ap, t_f t_flag)
{
	if (**str == 'c')
		ft_build('c', ap, t_flag);
	if (**str == 's')

	if (**str == 'p')

	if (**str == 'd' || **str == 'i')

	if (**str == 'u')

	if (**str == 'x' || **str == 'X')

	if (**str == 'n')

	if (**str == 'f')

	if (**str == 'g')

	if (**str == 'e')

	if (**str == '%')

}
