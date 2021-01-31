/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:46:50 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/23 05:13:46 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_hexadecimal_p(uintmax_t x)
{
	unsigned long long int	a;
	char					*str;
	char					qwe[18];
	int						i;

	i = 0;
	a = 0;
	if (!(str = (char *)malloc(sizeof(char) * 18)) && !x)
		return (0);
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
		t_flag->type_s = 0;
	if (!t_flag->minus)
		ft_dot_add_xtwo(t_flag);
	if (t_flag->minus)
	{
		i += ft_zero_and_x();
		i += ft_dot_add_x(t_flag);
		i += ft_putlstrx(t_flag, ft_slen(t_flag->type_s));
		return (i += ft_width_flag_work(t_flag, i));
	}
	else
	{
		if (t_flag->zero)
			i += ft_zero_and_x();
		i += ft_width_flag_work(t_flag, t_flag->dota + 2);
		if (!t_flag->zero)
			i += ft_zero_and_x();
		i += ft_dot_add_x(t_flag);
		return (i += ft_putlstrx(t_flag, ft_slen(t_flag->type_s)));
	}
}
