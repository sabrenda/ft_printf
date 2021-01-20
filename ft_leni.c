/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_leni.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:51:08 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 20:51:10 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_leni(intmax_t s)
{
	unsigned int	i;

	i = 0;
	if (s == 0)
	{
		i++;
		return (i);
	}
	if (s < 0)
		i++;
	while (s != 0)
	{
		s = s / 10;
		i++;
	}
	return (i);
}
