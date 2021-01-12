/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_printf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:47:53 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/12 08:40:55 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	int		count_printf;
	va_list	ap;

	count_printf  = 0;
	va_start(ap, str);
	count_printf += ft_work_printf(str, ap);
	va_end(ap);
	return (count_printf);
}
