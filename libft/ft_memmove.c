/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:53:14 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/01 16:39:50 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	unsigned char		*src2;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (src < dest)
		while (n-- > 0)
			dest2[n] = src2[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
