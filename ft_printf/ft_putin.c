/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:51:38 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 03:02:24 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr1(intmax_t nb)
{
	int		i;
	char	a;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "2", 1);
		i += 1;
		i += ft_putnbr1(147483648);
	}
	else if (nb < 0)
		i += ft_putnbr1(nb * (-1));
	else
	{
		if (nb >= 10)
			i += ft_putnbr1(nb / 10);
		a = ((nb % 10) + '0');
		write(1, &a, 1);
		i++;
	}
	return (i);
}

int		ft_putnbr2(intmax_t nb)
{
	int		i;
	char	a;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		i += 2;
		i += ft_putnbr2(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		i++;
		i += ft_putnbr2(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			i += ft_putnbr2(nb / 10);
		a = ((nb % 10) + '0');
		write(1, &a, 1);
		i++;
	}
	return (i);
}

int		ft_flagi(t_f *t_flag)
{
	int		i;

	i = 0;
	if (t_flag->type_i == 0 && !t_flag->dot)
		return (0);
	if (t_flag->minus_add)
		i += ft_putnbr1(t_flag->type_i);
	else
	{
		i += ft_putnbr2(t_flag->type_i);
		t_flag->minus_add = 1;
	}
	return (i);
}

int		ft_putin(t_f *t_flag)
{
	int		i;

	i = 0;
	if (t_flag->l || t_flag->ll)
		i += ft_flaglli(t_flag);
	else if (t_flag->hh)
		i += ft_flaghhi(t_flag);
	else if (t_flag->h)
		i += ft_flaghi(t_flag);
	else
		i += ft_flagi(t_flag);
	return (i);
}
