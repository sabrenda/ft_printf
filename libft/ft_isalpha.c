/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:11:42 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/09 15:48:20 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int ch)
{
	return ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122));
}