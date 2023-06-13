/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:37:04 by vsozonof          #+#    #+#             */
/*   Updated: 2023/05/14 23:30:07 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_handler(t_list *stacks)
{
	t_list_b *b;
	
	b = stacks->b;
	b->next = NULL;
	stacks->b = b;
	ft_printf("STACK A and B before\n");
	ft_printlst_a(stacks->a);
	ft_printlst_b(stacks->b);
	ft_printf("STACKS A AND B AFTER\n");
	ft_printlst_a(stacks->a);
	ft_printlst_b(stacks->b);
	ft_freelist_a(stacks->a);
	ft_freelist_b(stacks->b);
}
