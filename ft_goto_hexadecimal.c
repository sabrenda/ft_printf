/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_goto_hexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:41:54 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 20:42:11 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_goto_hexadecimal(unsigned int x)
{
	if (x == 10)
		return ('a');
	if (x == 11)
		return ('b');
	if (x == 12)
		return ('c');
	if (x == 13)
		return ('d');
	if (x == 14)
		return ('e');
	if (x == 15)
		return ('f');
	else
		return (48 + x);
}
