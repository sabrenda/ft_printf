/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 02:41:33 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/16 07:11:45 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_zero_and_x(void)
{
	write(1, "0x", 2);
	return (2);
}

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

int		ft_build_p(va_list ap, t_f *t_flag)
{
	int		i;

	i = 0;
	t_flag->type_p = va_arg(ap, unsigned long long int);
	if (!(t_flag->type_s = ft_hexadecimal_p(t_flag->type_p)))
		t_flag->type_s = "(null)";
	if (t_flag->minus)
	{
		i += ft_zero_and_x();
		i += ft_putlstr(t_flag->type_s, ft_strlen(t_flag->type_s));
		i += ft_width_flag_work(t_flag, i);
	}
	else
	{
		if (t_flag->zero)
			i += ft_zero_and_x();
		i += ft_width_flag_work(t_flag, ft_strlen(t_flag->type_s) + 2);
		if (!(t_flag->zero))
			i += ft_zero_and_x();
		i += ft_putlstr(t_flag->type_s, ft_strlen(t_flag->type_s));
	}
	free(t_flag->type_s);
	return (i);
}
