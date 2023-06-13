/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:26:44 by vsozonof          #+#    #+#             */
/*   Updated: 2023/05/14 23:27:29 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlst_a(t_list_a *L)
{
	if (L == NULL)
	{
		printf("La liste est vide.\n");
		return ;
	}
	ft_printf("LISTE A = \n");
	while (L)
	{
		ft_printf("%d\n", L->data);
		L = L->next;
	}
}

void	ft_printlst_b(t_list_b *L)
{
	if (L == NULL)
	{
		printf("La liste est vide.\n");
		return ;
	}
	ft_printf("LISTE B = \n");
	while (L)
	{
		ft_printf("%d\n", L->data);
		L = L->next;
	}
	ft_printf("\n");
}
