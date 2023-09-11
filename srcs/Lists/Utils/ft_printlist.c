/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:26:44 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/11 02:19:44 by vsozonof         ###   ########.fr       */
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

void	ft_printlst_tmp(t_list_tmp *L)
{
	if (L == NULL)
	{
		printf("La liste est vide.\n");
		return ;
	}
	ft_printf("LISTE TMP = \n");
	while (L)
	{
		ft_printf("%d\n", L->data);
		L = L->next;
	}
}