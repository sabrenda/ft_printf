/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_flag_work.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:11:18 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/13 07:05:41 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_width_flag_work(t_f t_flag)
{
	int		i;
	char	c;

	i = 1;
	if (t_flag.zero)
		c = '0';
	else
		c = ' ';
	while (i < t_flag.width)
	{
		write(1, &c, 1);
		i++;
	}
	return (i);
}
