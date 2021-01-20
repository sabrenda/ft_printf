/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:48:00 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/20 03:37:56 by sabrenda         ###   ########.fr       */
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
	if (t_flag->type_i == 0 && !t_flag->dot)
		return (0);
	i += ft_putnbru(t_flag->type_u);
	return (i);
}
