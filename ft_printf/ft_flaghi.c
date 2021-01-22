/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flaghi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 03:14:13 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 03:15:38 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbrh1(intmax_t nb)
{
	int		i;
	char	a;

	i = 0;
	if (nb == -32768)
	{
		write(1, "3", 1);
		i += 1;
		i += ft_putnbrh1(2768);
	}
	else if (nb < 0)
		i += ft_putnbrh1(nb * (-1));
	else
	{
		if (nb >= 10)
			i += ft_putnbrh1(nb / 10);
		a = ((nb % 10) + '0');
		write(1, &a, 1);
		i++;
	}
	return (i);
}

int		ft_putnbrh2(intmax_t nb)
{
	int		i;
	char	a;

	i = 0;
	if (nb == -32768)
	{
		write(1, "-3", 2);
		i += 2;
		i += ft_putnbrh2(2768);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		i++;
		i += ft_putnbrh2(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			i += ft_putnbrh2(nb / 10);
		a = ((nb % 10) + '0');
		write(1, &a, 1);
		i++;
	}
	return (i);
}

int		ft_flaghi(t_f *t_flag)
{
	int		i;

	i = 0;
	if (t_flag->type_i == 0 && !t_flag->dot)
		return (0);
	if (t_flag->minus_add)
		i += ft_putnbrh1(t_flag->type_i);
	else
	{
		i += ft_putnbrh2(t_flag->type_i);
		t_flag->minus_add = 1;
	}
	return (i);
}
