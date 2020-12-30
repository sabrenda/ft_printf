/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:54:00 by sabrenda          #+#    #+#             */
/*   Updated: 2020/10/31 19:00:25 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t count)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *)dest;
	str2 = (unsigned char *)source;
	i = 0;
	if (dest == source)
		return (dest);
	while (i < count)
	{
		str[i] = str2[i];
		i++;
	}
	return (dest);
}
