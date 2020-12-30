/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:29:38 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/09 15:45:33 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	if (c == '\0')
		return ((char *)s + i);
	if (i == 0)
		return (NULL);
	while (i--)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
	}
	return (NULL);
}
