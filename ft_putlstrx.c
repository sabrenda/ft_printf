/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstrx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:22:00 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/20 03:38:06 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putlstrx(t_f *t_flag, int dot)
{
	int	i;

	i = 0;
	if (t_flag->type_x == 0 && !t_flag->dot)
		return (0);
	if (dot == -1)
		dot = ft_strlen(t_flag->type_s);
	while (t_flag->type_s[i] && i < dot)
	{
		write(1, &t_flag->type_s[i], 1);
		i++;
	}
	free(t_flag->type_s);
	return (i);
}
