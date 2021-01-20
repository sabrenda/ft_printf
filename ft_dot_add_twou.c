/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot_add_twou.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:49:16 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 20:49:18 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dot_add_twou(t_f *t_flag)
{
	int i;

	if (t_flag->dot == -1)
	{
		t_flag->dota = ft_lenu(t_flag->type_u);
		return ;
	}
	i = t_flag->dot - ft_lenu(t_flag->type_u);
	if (i <= 0)
		t_flag->dota = ft_lenu(t_flag->type_u);
	else
		t_flag->dota = i + ft_lenu(t_flag->type_u);
}
