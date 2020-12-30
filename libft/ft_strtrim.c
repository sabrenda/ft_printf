/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:26:28 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/08 18:58:02 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		end;
	size_t		start;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) != 0 && s1[start] != '\0')
		start++;
	if (s1[start] == '\0' || ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]) != 0)
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}
