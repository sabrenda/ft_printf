/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 03:40:26 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 22:16:17 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int		ft_putinu(t_f *t_flag)
{
	int		i;

	i = 0;
	if (t_flag->type_u == 0 && !t_flag->dot)
		return (0);
	i += ft_putnbru(t_flag->type_u);
	return (i);
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
		i += ft_putinu(t_flag);
		return (i += ft_width_flag_work(t_flag, i));
	}
	else
	{
		i += ft_width_flag_work(t_flag, t_flag->dota);
		i += ft_dot_add_u(t_flag);
		return (i += ft_putinu(t_flag));
	}
}
