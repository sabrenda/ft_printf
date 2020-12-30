/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:18:59 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/08 20:35:46 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		sizedst;
	size_t		sizesrc;

	i = 0;
	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	while (*dst)
		dst++;
	if (size <= sizedst)
		return (size + sizesrc);
	while ((i < size - sizedst - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (sizedst + sizesrc);
}
