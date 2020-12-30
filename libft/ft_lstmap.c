/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:16:45 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/09 15:16:46 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;

	if (!lst || !f || !del)
		return (NULL);
	if (!(new = ft_lstnew(f(lst->content))))
		return (NULL);
	start = new;
	while (lst)
	{
		if (lst->next)
		{
			if (!(new = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
			ft_lstadd_back(&start, new);
		}
		lst = lst->next;
	}
	new->next = NULL;
	return (start);
}
