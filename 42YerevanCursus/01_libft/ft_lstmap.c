/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:16:00 by tidavtya          #+#    #+#             */
/*   Updated: 2022/04/21 01:35:11 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*retlst;
	t_list	*node;

	if (!lst || !del)
		return (NULL);
	retlst = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&retlst, del);
			return (NULL);
		}
		ft_lstadd_back(&retlst, node);
		lst = lst->next;
	}
	return (retlst);
}
