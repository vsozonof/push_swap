/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:26:58 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/11 02:17:37 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_a	*ft_freelist_a(t_list_a *L)
{
	t_list_a	*tmp;

	tmp = NULL;
	while (L)
	{
		tmp = L->next;
		free(L);
		L = tmp;
	}
	return (L);
}

t_list_b	*ft_freelist_b(t_list_b *L)
{
	t_list_b	*tmp;

	tmp = NULL;
	while (L)
	{
		tmp = L->next;
		free(L);
		L = tmp;
	}
	return (L);
}

t_list_tmp	*ft_freelist_tmp(t_list_tmp *L)
{
	t_list_tmp	*tmp;

	tmp = NULL;
	while (L)
	{
		tmp = L->next;
		free(L);
		L = tmp;
	}
	return (L);
}