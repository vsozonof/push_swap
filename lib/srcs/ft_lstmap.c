/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 03:07:21 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/24 08:29:02 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_element;

	if (!(lst) || !(f) || !(del))
		return (NULL);
	new_element = ft_lstnew(f(lst->content));
	if (!new_element)
	{
		ft_lstclear(&new_lst, del);
		return (NULL);
	}
	new_lst = new_element;
	lst = lst->next;
	while (lst)
	{
		new_element = ft_lstnew(f(lst->content));
		if (!new_element)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_element);
	}
	return (new_lst);
}
