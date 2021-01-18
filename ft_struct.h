/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:03:41 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 04:08:26 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_H
# define FT_STRUCT_H

typedef struct				s_flag
{
	int						flag_on;
	int						minus;
	int						plus;
	int						space;
	int						octo;
	int						zero;
	int						width;
	int						d_flag_on;
	int						dot;
	int						lh_flag_on;
	int						l;
	int						ll;
	int						h;
	int						hh;
	int						up_x_zero;
	int						type_len_x;
	int						t_flag_on;
	int						add;
	int						dota;
	char					type_c;
	char					*type_s;
	unsigned long long int	type_p;
	intmax_t				type_i;
	uintmax_t				type_u;
	unsigned long long int	type_x;
	unsigned int			type_n;
	float					type_f;
	float					type_g;
	float					type_e;
	char					type_spec;
}							t_f;

#endif
