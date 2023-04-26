/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:26:44 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/26 15:27:18 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlst_a(t_list_a *L)
{
	while (L)
	{
		ft_printf("%d\n", L->data);
		L = L->next;
	}
	ft_printf("\n");
}

void	ft_printlst_b(t_list_b *L)
{
	while (L)
	{
		ft_printf("%d\n", L->data);
		L = L->next;
	}
	ft_printf("\n");
}
