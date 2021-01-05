/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 23:20:31 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/05 17:24:58 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_work_printf(const char *str, va_list print_va)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str == '%')
			count += ft_parser(&str, print_va);
		if (*str == '\0')
			break ;
		if (*str == '%')
			continue;
		write(1, str, 1);
		str++;
		count++;
	}
	return (count);
}
