/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot_add_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:46:33 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 20:46:35 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_dot_add_x(t_f *t_flag)
{
	int i;
	int a;

	if (t_flag->dot == -1)
		return (0);
	i = t_flag->dot - ft_slen(t_flag->type_s);
	if (i <= 0)
		return (0);
	a = 0;
	while (i > a++)
		write(1, "0", 1);
	return (i);
}
