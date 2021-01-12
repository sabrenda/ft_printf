/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:13:37 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/12 08:46:09 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi(const char **str)
{
	int	znak;
	int	res;

	res = 0;
	znak = 1;
	while ((**str >= 9 && **str <= 13) || **str == 32)
		*str++;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			znak = -1;
		*str++;
	}
	while (**str >= '0' && **str <= '9')
	{
		res = res * 10 + (**str - '0');
		*str++;
	}
	*str--;
	return ((res * znak));
}
