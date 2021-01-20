/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot_add_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:48:49 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 20:48:51 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
