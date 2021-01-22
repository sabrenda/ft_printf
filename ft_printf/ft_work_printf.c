/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 07:15:03 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 22:18:23 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_work_printf(const char **str, va_list ap)
{
	int		count;

	count = 0;
	while (1)
	{
		if (**str == '%')
		{
			(*str)++;
			count += ft_parser(str, ap);
			(*str)++;
		}
		if (**str == '\0')
			break ;
		if (**str == '%')
			continue;
		write(1, *str, 1);
		(*str)++;
		count++;
	}
	return (count);
}
