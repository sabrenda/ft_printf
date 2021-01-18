/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 03:40:26 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 04:55:52 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_lenu(uintmax_t s)
{
	unsigned int	i;

	i = 0;
	if (s == 0)
	{
		i++;
		return (i);
	}
	while (s != 0)
	{
		s = s / 10;
		i++;
	}
	return (i);
}

int		ft_putnbru(uintmax_t nb)
{
	int		i;
	char	a;

	i = 0;
	if (nb >= 10)
		i += ft_putnbru(nb / 10);
	a = ((nb % 10) + '0');
	write(1, &a, 1);
	i++;
	return (i);
}

void	ft_hl_u(va_list ap, t_f *t_flag)
{
	if (t_flag->ll)
		t_flag->type_u = (uintmax_t)va_arg(ap, unsigned long long int);
	else if (t_flag->l)
		t_flag->type_u = (uintmax_t)va_arg(ap, unsigned long);
	else if (t_flag->h)
		t_flag->type_u = (uintmax_t)((unsigned short)va_arg(ap, unsigned int));
	else if (t_flag->hh)
		t_flag->type_u = (uintmax_t)((unsigned char)va_arg(ap, unsigned int));
	else
		t_flag->type_u = (uintmax_t)va_arg(ap, unsigned int);
}

int		ft_dot_add_u(t_f *t_flag)
{
	int i;
	int a;

	if (t_flag->dot == -1)
		return (0);
	i = t_flag->dot - ft_lenu(t_flag->type_u);
	if (i <= 0)
		return (0);
	a = 0;
	while (i > a++)
		write(1, "0", 1);
	return (i);
}

void	ft_dot_add_twou(t_f *t_flag)
{
	int i;

	if (t_flag->dot == -1)
	{
		t_flag->dota = ft_lenu(t_flag->type_u);
		return ;
	}
	i = t_flag->dot - ft_lenu(t_flag->type_u);
	if (i <= 0)
		t_flag->dota = ft_lenu(t_flag->type_u);
	else
		t_flag->dota = i + ft_lenu(t_flag->type_u);
}

int		ft_build_u(va_list ap, t_f *t_flag)
{
	unsigned int	i;

	i = 0;
	ft_hl_u(ap, t_flag);
	if (!t_flag->minus)
		ft_dot_add_twou(t_flag);
	if (t_flag->minus)
	{
		i += ft_dot_add_u(t_flag);
		i += ft_putnbru(t_flag->type_u);
		return (i += ft_width_flag_work(t_flag, i));
	}
	else
	{
		i += ft_width_flag_work(t_flag, t_flag->dota);
		i += ft_dot_add_u(t_flag);
		return (i += ft_putnbru(t_flag->type_u));
	}
}
