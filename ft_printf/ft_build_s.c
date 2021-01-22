/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:47:00 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 22:16:10 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putlstr(char *s, int dot)
{
	int	i;

	i = 0;
	if (dot == -1)
		dot = ft_strlen(s);
	while (s[i] && i < dot)
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int		ft_width_flag_work_s(t_f *t_flag, int i)
{
	char	c;
	int		res;

	res = 0;
	c = 0;
	if (t_flag->zero)
		c = '0';
	else
		c = ' ';
	while (i < t_flag->width)
	{
		write(1, &c, 1);
		i++;
		res++;
	}
	return (res);
}

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
