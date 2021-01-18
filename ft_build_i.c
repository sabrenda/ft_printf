/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 19:16:38 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 04:30:59 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_leni(intmax_t s)
{
	unsigned int	i;

	i = 0;
	if (s == 0)
	{
		i++;
		return (i);
	}
	if (s < 0)
		i++;
	while (s != 0)
	{
		s = s / 10;
		i++;
	}
	return (i);
}

int		ft_putnbr(intmax_t nb)
{
	int		i;
	char	a;

	i = 0;
	if (nb <= -9223372036854775807)
	{
		write(1, "-9", 2);
		i += 2;
		i += ft_putnbr(223372036854775807);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		i++;
		i += ft_putnbr(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			i += ft_putnbr(nb / 10);
		a = ((nb % 10) + '0');
		write(1, &a, 1);
		i++;
	}
	return (i);
}

int		ft_plus_add(t_f *t_flag)
{
	if (t_flag->plus)
	{
		write(1, "+", 1);
		t_flag->add = 1;
		return (1);
	}
	if (t_flag->space)
	{
		write(1, " ", 1);
		t_flag->add = 1;
		return (1);
	}
	return (0);
}

void	ft_hl_i(va_list ap, t_f *t_flag)
{
	if (t_flag->ll)
		t_flag->type_i = (intmax_t)va_arg(ap, long long int);
	else if (t_flag->l)
		t_flag->type_i = (intmax_t)va_arg(ap, long int);
	else if (t_flag->h)
		t_flag->type_i = (intmax_t)((short)va_arg(ap, int));
	else if (t_flag->hh)
		t_flag->type_i = (intmax_t)((signed char)va_arg(ap, int));
	else
		t_flag->type_i = (intmax_t)va_arg(ap, int);
	if (t_flag->type_i < 0)
	{
		t_flag->space = 0;
		t_flag->plus = 0;
	}
}

int		ft_dot_add_i(t_f *t_flag)
{
	int i;
	int a;

	if (t_flag->dot == -1)
		return (0);
	i = t_flag->dot - ft_leni(t_flag->type_i);
	if (i <= 0)
		return (0);
	a = 0;
	while (i > a++)
		write(1, "0", 1);
	return (i);
}

void	ft_dot_add_two(t_f *t_flag)
{
	int i;

	if (t_flag->dot == -1)
	{
		t_flag->dota = ft_leni(t_flag->type_i);
		return ;
	}
	i = t_flag->dot - ft_leni(t_flag->type_i);
	if (i <= 0)
		t_flag->dota = ft_leni(t_flag->type_i);
	else
		t_flag->dota = i + ft_leni(t_flag->type_i);
}

int		ft_build_i(va_list ap, t_f *t_flag)
{
	int		i;

	i = 0;
	ft_hl_i(ap, t_flag);
	if (!t_flag->minus)
		ft_dot_add_two(t_flag);
	if (t_flag->minus)
	{
		if (t_flag->plus || t_flag->space)
			i += ft_plus_add(t_flag);
		i += ft_dot_add_i(t_flag);
		i += ft_putnbr(t_flag->type_i);
		return (i += ft_width_flag_work(t_flag, i));
	}
	else
	{
		if ((t_flag->plus || t_flag->space) && t_flag->zero)
			i += ft_plus_add(t_flag);
		i += ft_width_flag_work(t_flag, t_flag->dota + t_flag->add);
		if ((t_flag->plus || t_flag->space) && !t_flag->zero)
			i += ft_plus_add(t_flag);
		i += ft_dot_add_i(t_flag);
		return (i += ft_putnbr(t_flag->type_i));
	}
}
