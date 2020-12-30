/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:05:15 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/03 23:22:26 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t count)
{
	size_t				i;
	unsigned char		*str;
	unsigned char		*str2;

	str = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	i = 0;
	if (!str && !str2)
		return (NULL);
	while (i < count)
	{
		str[i] = str2[i];
		if (str[i] == (unsigned char)ch)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
