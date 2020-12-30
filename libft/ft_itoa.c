/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:20:19 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/09 20:55:49 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		sizelen(int num)
{
	int		i;

	i = 0;
	if (num <= 0)
		i++;
	while (num)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			size;
	long int	num;

	size = sizelen(n);
	num = n;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	str[size--] = '\0';
	if (num == 0)
		str[0] = 48;
	if (n < 0)
	{
		num = num * -1;
		str[0] = '-';
	}
	while (num > 0)
	{
		str[size--] = (num % 10) + 48;
		num = num / 10;
	}
	return (str);
}
