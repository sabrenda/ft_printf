/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flaghhi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 02:57:57 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/22 04:34:23 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_putnbrhh1(intmax_t nb)
{
	int		i;
	char	a;

	i = 0;
	if (nb == -128)
	{
		write(1, "1", 1);
		i += 1;
		i += ft_putnbrhh1(28);
	}
	else if (nb < 0)
		i += ft_putnbrhh1(nb * (-1));
	else
	{
		if (nb >= 10)
			i += ft_putnbrhh1(nb / 10);
		a = ((nb % 10) + '0');
		write(1, &a, 1);
		i++;
	}
	return (i);
}

int		ft_putnbrhh2(intmax_t nb)
{
	int		i;
	char	a;

	i = 0;
	if (nb == -128)
	{
		write(1, "-1", 2);
		i += 2;
		i += ft_putnbrhh2(28);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		i++;
		i += ft_putnbrhh2(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			i += ft_putnbrhh2(nb / 10);
		a = ((nb % 10) + '0');
		write(1, &a, 1);
		i++;
	}
	return (i);
}

int		ft_flaghhi(t_f *t_flag)
{
	int		i;

	i = 0;
	if (t_flag->type_i == 0 && !t_flag->dot)
		return (0);
	if (t_flag->minus_add)
		i += ft_putnbrhh1(t_flag->type_i);
	else
	{
		i += ft_putnbrhh2(t_flag->type_i);
		t_flag->minus_add = 1;
	}
	return (i);
}
