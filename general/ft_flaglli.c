/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flaglli.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 02:57:57 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 04:34:33 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_putnbrll1(intmax_t nb)
{
	int		i;
	char	a;

	i = 0;
	if (nb < -9223372036854775807)
	{
		write(1, "9", 1);
		i += 1;
		i += ft_putnbrll1(223372036854775808);
	}
	else if (nb < 0)
		i += ft_putnbrll1(nb * (-1));
	else
	{
		if (nb >= 10)
			i += ft_putnbrll1(nb / 10);
		a = ((nb % 10) + '0');
		write(1, &a, 1);
		i++;
	}
	return (i);
}

int		ft_putnbrll2(intmax_t nb)
{
	int		i;
	char	a;

	i = 0;
	if (nb < -9223372036854775807)
	{
		write(1, "-9", 2);
		i += 2;
		i += ft_putnbrll2(223372036854775808);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		i++;
		i += ft_putnbrll2(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			i += ft_putnbrll2(nb / 10);
		a = ((nb % 10) + '0');
		write(1, &a, 1);
		i++;
	}
	return (i);
}

int		ft_flaglli(t_f *t_flag)
{
	int		i;

	i = 0;
	if (t_flag->type_i == 0 && !t_flag->dot)
		return (0);
	if (t_flag->minus_add)
		i += ft_putnbrll1(t_flag->type_i);
	else
	{
		i += ft_putnbrll2(t_flag->type_i);
		t_flag->minus_add = 1;
	}
	return (i);
}
