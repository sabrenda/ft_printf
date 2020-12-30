/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:19:10 by sabrenda          #+#    #+#             */
/*   Updated: 2020/12/30 21:16:44 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_free(char **str, size_t i)
{
	while (0 < i--)
		free(str[i]);
	free(str);
	return (NULL);
}

int		words(char const *str, char c)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		while (str[i] != c && str[i])
			i++;
		res++;
	}
	return (res);
}

char	**memory(char **str, char const *s, char c)
{
	int			i;
	int			memory;
	size_t		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		memory = 0;
		while (s[i] != c && s[i])
		{
			i++;
			memory++;
		}
		if (memory != 0)
		{
			if (!(str[words] = (char *)malloc(sizeof(char) * (memory + 1))))
				return (ft_free(str, words));
			words++;
		}
	}
	str[words] = NULL;
	return (str);
}

void	paste(char **str, char const *s, char c)
{
	int		x;
	int		y;
	int		i;
	int		g;

	i = 0;
	x = 0;
	g = 0;
	while (s[i])
	{
		y = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			str[x][y] = s[i];
			y++;
			i++;
			g = 1;
		}
		if (g == 1)
			str[x][y] = '\0';
		g = 0;
		x++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	word;

	if (!s)
		return (NULL);
	word = words(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (word + 1))))
		return (NULL);
	if (!(str = memory(str, s, c)))
		return (NULL);
	paste(str, s, c);
	return (str);
}
