/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 05:59:41 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 20:40:52 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_strlen(const char *str)
{
	unsigned int	j;

	j = 0;
	while (str[j] != '\0')
		j++;
	return (j);
}
