/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 19:16:38 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/17 02:47:27 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_leni(long long int s)
{
	unsigned int	i;

	i = 0;
	while (s)
	{
		s = s / 10;
		i++;
	}
	return (i);
}

int		ft_putnbr(long long int nb)
{
	int		i;
	char	a;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		i += 2;
		i += ft_putnbr(147483648);
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
	if (t_flag->type_i >= 0 && t_flag->plus)
	{
		write(1, "+", 1);
		t_flag->space = 0;
		return (1);
	}
	if (t_flag->minus && !(t_flag->plus) && t_flag->space)
	{
		write(1, " ", 1);
		return (1);
	}
	if (t_flag->type_i >= 0 && !(t_flag->plus))
	{
		if ((ft_leni(t_flag->type_i) < t_flag->width) && !(t_flag->zero))
			return (0);
		else
		{
			write(1, " ", 1);
			t_flag->plus = 1;
			return (1);
		}
	}
	return (0);
}

void	ft_hl_i(va_list ap, t_f *t_flag)
{
	if (t_flag->l || t_flag->ll)
		t_flag->type_i = va_arg(ap, long long int);
	else if (t_flag->h)
		t_flag->type_i = va_arg(ap, int);
	else if (t_flag->hh)
		t_flag->type_i = va_arg(ap, int);
	else
		t_flag->type_i = va_arg(ap, int);
}

int		ft_build_i(va_list ap, t_f *t_flag)
{
	int		i;

	i = 0;
	ft_hl_i(ap, t_flag);
	if (t_flag->minus)
	{
		if (t_flag->plus || t_flag->space)
			i += ft_plus_add(t_flag);
		i += ft_putnbr(t_flag->type_i);
		i += ft_width_flag_work(t_flag, i);
	}
	else
	{
		if ((t_flag->plus || t_flag->space) && t_flag->zero)
			i += ft_plus_add(t_flag);
		i += ft_width_flag_work(t_flag, ft_leni(t_flag->type_i) + t_flag->plus);
		if ((t_flag->plus || t_flag->space) && !(t_flag->zero))
			i += ft_plus_add(t_flag);
		i += ft_putnbr(t_flag->type_i);
	}
	return (i);
}
