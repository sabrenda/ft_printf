/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:47:34 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 20:47:35 by sabrenda         ###   ########.fr       */
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
