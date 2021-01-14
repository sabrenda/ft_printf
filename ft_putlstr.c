/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:22:00 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/14 18:26:11 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putlstr(char *s, int dot)
{
	int	i;

	i = 0;
	if (dot == -1)
		dot = ft_strlen(s);
	while (s[i] && i < dot)
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
