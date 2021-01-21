/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:04:27 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 20:48:28 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putlstrx(t_f *t_flag, int dot)
{
	int	i;

	i = 0;
	if (t_flag->type_x == 0 && !t_flag->dot)
		return (0);
	if (dot == -1)
		dot = ft_strlen(t_flag->type_s);
	while (t_flag->type_s[i] && i < dot)
	{
		write(1, &t_flag->type_s[i], 1);
		i++;
	}
	free(t_flag->type_s);
	return (i);
}

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

char	*ft_hexadecimal(uintmax_t x, unsigned int len_x)
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

int		ft_build_x(char x, va_list ap, t_f *t_flag)
{
	int		i;

	i = 0;
	ft_hl_x(ap, t_flag);
	t_flag->type_s = ft_hexadecimal(t_flag->type_x, t_flag->type_len_x);
	if (x == 'X')
		ft_toupper(t_flag->type_s, t_flag);
	if (!t_flag->minus)
		ft_dot_add_xtwo(t_flag);
	if (t_flag->minus)
	{
		if (t_flag->octo && t_flag->type_x)
			i += ft_zero_and_xx(t_flag);
		i += ft_dot_add_x(t_flag);
		i += ft_putlstrx(t_flag, ft_slen(t_flag->type_s));
		return (i += ft_width_flag_work(t_flag, i));
	}
	if (t_flag->octo && t_flag->zero)
		i += ft_zero_and_xx(t_flag);
	i += ft_width_flag_work(t_flag, t_flag->dota + t_flag->octo);
	if (t_flag->octo && !(t_flag->zero))
		i += ft_zero_and_xx(t_flag);
	i += ft_dot_add_x(t_flag);
	return (i += ft_putlstrx(t_flag, ft_slen(t_flag->type_s)));
}
