/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:04:27 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/16 07:36:17 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_slen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		ft_zero_and_xx(t_f *t_flag)
{
	if (t_flag->type_x)
	{
		if (!(t_flag->up_x_zero))
		{
			write(1, "0X", 2);
			return (2);
		}
		else
		{
			write(1, "0x", 2);
			return (2);
		}
	}
	t_flag->octo = 0;
	return (0);
}

void	ft_toupper(char *ch, t_f *t_flag)
{
	int		i;

	t_flag->up_x_zero = 1;
	i = 0;
	while (ch[i])
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = (ch[i] - 32);
		i++;
	}
}

void	ft_hl(va_list ap, t_f *t_flag)
{
	if (t_flag->l || t_flag->ll)
	{
		t_flag->type_x = va_arg(ap, unsigned long long int);
		t_flag->type_len_x = 16;
	}
	else if (t_flag->h)
	{
		t_flag->type_x = va_arg(ap, unsigned int);
		t_flag->type_len_x = 4;
	}
	else if (t_flag->hh)
	{
		t_flag->type_x = va_arg(ap, unsigned int);
		t_flag->type_len_x = 2;
	}
	else
	{
		t_flag->type_x = va_arg(ap, unsigned int);
		t_flag->type_len_x = 8;
	}
}

int		ft_build_x(char x, va_list ap, t_f *t_flag)
{
	int		i;

	i = 0;
	ft_hl(ap, t_flag);
	t_flag->type_s = ft_hexadecimal(t_flag->type_x, t_flag->type_len_x);
	if (x == 'X')
		ft_toupper(t_flag->type_s, t_flag);
	if (t_flag->minus)
	{
		if (t_flag->octo && t_flag->type_x)
			i += ft_zero_and_xx(t_flag);
		i += ft_putlstr(t_flag->type_s, ft_slen(t_flag->type_s));
		i += ft_width_flag_work(t_flag, i);
	}
	else
	{
		if (t_flag->octo && t_flag->zero)
			i += ft_zero_and_xx(t_flag);
		i += ft_width_flag_work(t_flag, ft_slen(t_flag->type_s) + t_flag->octo);
		if (t_flag->octo && !(t_flag->zero))
			i += ft_zero_and_xx(t_flag);
		i += ft_putlstr(t_flag->type_s, ft_slen(t_flag->type_s));
	}
	free(t_flag->type_s);
	return (i);
}
