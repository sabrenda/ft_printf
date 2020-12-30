/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:52:24 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/01 16:46:21 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *string1, const char *string2, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num && string1[i] != '\0' && string2[i] != '\0')
	{
		if (!((unsigned char)string1[i] - (unsigned char)string2[i] == 0))
		{
			return ((unsigned char)string1[i] - (unsigned char)string2[i]);
		}
		i++;
	}
	if (i != num)
	{
		return ((unsigned char)string1[i] - (unsigned char)string2[i]);
	}
	return (0);
}
