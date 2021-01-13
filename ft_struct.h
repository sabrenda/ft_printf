/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:52:51 by Ahmed             #+#    #+#             */
/*   Updated: 2021/01/13 07:17:40 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_H
# define FT_STRUCT_H

typedef struct		s_flag
{
	int				flag_on;
	int				minus;
	int				plus;
	int				space;
	int				octothorpe;
	int				zero;
	int				width;
	int				d_flag_on;
	int				dot;
	int				lh_flag_on;
	int				l;
	int				ll;
	int				h;
	int				hh;
	int				t_flag_on;
	char			type_c;
	char			*type_s;
	unsigned int	type_p;
	int				type_i;
	unsigned int	type_u;
	int				type_x;
	int				type_xx;
	unsigned int	type_n;
	float			type_f;
	float			type_g;
	float			type_e;
	char			type_spec;
}					t_f;

#endif
