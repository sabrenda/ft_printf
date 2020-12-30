/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:43:49 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/11 16:13:41 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		count_l;
	size_t		count_b;
	size_t		count;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	count_l = ft_strlen(little);
	count_b = ft_strlen(big);
	count = len;
	if (count_b < count_l)
		return (NULL);
	while (big[i] && count_l <= len && i < count)
	{
		if (ft_strncmp(big + i, little, count_l) == 0)
			return ((char *)big + i);
		i++;
		len--;
	}
	return (NULL);
}
