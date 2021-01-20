/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:50:26 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 20:50:27 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_hexadecimal_p(unsigned long long int x)
{
	unsigned long long int	a;
	char					*str;
	char					qwe[18];
	int						i;

	i = 0;
	a = 0;
	if (!(str = (char *)malloc(sizeof(char) * 18)))
		return (NULL);
	ft_bzero(str, 18);
	ft_bzero(qwe, 18);
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
