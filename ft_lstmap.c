/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccodiga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 09:59:52 by ccodiga           #+#    #+#             */
/*   Updated: 2018/10/26 09:59:54 by ccodiga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;
	t_list *iter;

	if (!lst)
		return (NULL);
	res = (t_list*)malloc(sizeof(lst));
	iter = (t_list*)malloc(sizeof(lst));
	res = f(ft_lstnew(lst->content, lst->content_size));
	iter = res;
	lst = lst->next;
	while (lst)
	{
		iter->next = f(ft_lstnew(lst->content, lst->content_size));
		lst = lst->next;
		iter = iter->next;
	}
	return (res);
}
