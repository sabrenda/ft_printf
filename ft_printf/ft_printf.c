/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 00:07:49 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 22:17:42 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	int				count_printf;
	va_list			ap;

	count_printf = 0;
	va_start(ap, str);
	count_printf += ft_work_printf(&str, ap);
	va_end(ap);
	return (count_printf);
}
