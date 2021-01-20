/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 06:15:56 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/20 03:14:00 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_hexadecimal(unsigned long long int x, unsigned int len_x)
{
	unsigned long long int	a;
	char					*str;
	char					qwe[len_x];
	int						i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * len_x)))
		return ("");
	ft_bzero(str, len_x);
	ft_bzero(qwe, len_x);
	while (1)
	{
		a = (x / 16) * 16;
		qwe[i] = ft_goto_hexadecimal(x - a);
		if (!(x = x / 16))
			break ;
		i++;
	}
	a = 0;
	while (0 <= i)
		str[a++] = qwe[i--];
	return (str);
}
