/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_printf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:47:53 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/07 02:56:32 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	//char	*str_copy;
	int		count_printf;
	va_list	print_arg;

	count_printf  = 0;
	//str_copy = ft_strdup(str);
	va_start(print_arg, str);
	count_printf += ft_work_printf(str, print_arg);
	va_end(print_arg);
	//free(str_copy);
	return (count_printf);
}
