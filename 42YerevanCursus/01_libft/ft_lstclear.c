/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:49:59 by tidavtya          #+#    #+#             */
/*   Updated: 2022/04/20 23:58:24 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	if (lst)
	{
		while (*lst)
		{
			node = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(node, del);
		}
	}
	*lst = NULL;
}
