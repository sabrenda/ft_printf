/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:03:41 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/15 06:34:12 by sabrenda         ###   ########.fr       */
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
	int						octothorpe;
	int						zero;
	int						width;
	int						d_flag_on;
	int						dot;
	int						lh_flag_on;
	int						l;
	int						ll;
	int						h;
	int						hh;
	int						t_flag_on;
	char					type_c;
	char					*type_s;
	unsigned long long int	type_p;
	int						type_i;
	unsigned int			type_u;
	int						type_x;
	int						type_xx;
	unsigned int			type_n;
	float					type_f;
	float					type_g;
	float					type_e;
	char					type_spec;
}							t_f;

#endif
