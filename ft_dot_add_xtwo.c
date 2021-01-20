/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot_add_xtwo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:46:58 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 20:47:00 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dot_add_xtwo(t_f *t_flag)
{
	int i;

	if (t_flag->dot == -1)
	{
		t_flag->dota = ft_slen(t_flag->type_s);
		return ;
	}
	i = t_flag->dot - ft_slen(t_flag->type_s);
	if (i <= 0)
		t_flag->dota = ft_slen(t_flag->type_s);
	else
		t_flag->dota = i + ft_slen(t_flag->type_s);
}
