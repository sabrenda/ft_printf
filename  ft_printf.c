/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_printf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:00:29 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/13 15:00:30 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	int				count_printf;
	// char			*str1;
	va_list			ap;

	// str1 = ft_strdup(str);
	count_printf  = 0;
	va_start(ap, str);
	count_printf += ft_work_printf(&str, ap);
	va_end(ap);
	return (count_printf);
}
