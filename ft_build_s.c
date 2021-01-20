/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 02:02:38 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/20 03:29:54 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_build_s(va_list ap, t_f *t_flag)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	t_flag->type_s = va_arg(ap, char *);
	if (t_flag->type_s == NULL)
		t_flag->type_s = "(null)";
	if (t_flag->dot == -1)
		t_flag->dot = ft_strlen(t_flag->type_s);
	if (t_flag->minus)
	{
		i += ft_putlstr(t_flag->type_s, t_flag->dot);
		i += ft_width_flag_work_s(t_flag, i);
	}
	else
	{
		while (t_flag->type_s[j] && j < t_flag->dot)
			j++;
		i = ft_width_flag_work_s(t_flag, j);
		i += ft_putlstr(t_flag->type_s, t_flag->dot);
	}
	return (i);
}
