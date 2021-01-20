/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot_add_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:55:16 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/19 06:27:05 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dot_add_two(t_f *t_flag)
{
	int i;

	if (t_flag->dot == -1)
	{
		t_flag->dota = ft_leni(t_flag->type_i);
		return ;
	}
	if (t_flag->type_i >= 0)
	{
		i = t_flag->dot - ft_leni(t_flag->type_i);
	}
	else
	{
		i = t_flag->dot - (ft_leni(t_flag->type_i) - 1);
	}
	if (i <= 0)
		t_flag->dota = ft_leni(t_flag->type_i);
	else
		t_flag->dota = i + ft_leni(t_flag->type_i);
}
