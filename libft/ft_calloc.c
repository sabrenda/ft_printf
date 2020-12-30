/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:54:26 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/02 15:28:52 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	int				i;
	char			*str;
	unsigned int	total;

	total = size * num;
	i = 0;
	str = (void *)malloc(total);
	if (!str)
		return (NULL);
	i = 0;
	while (total--)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
