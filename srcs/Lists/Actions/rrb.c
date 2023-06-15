/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:04:49 by vsozonof          #+#    #+#             */
/*   Updated: 2023/06/15 10:15:02 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//							--- Reverse Rotate B ---
//------------------------------------------------------------------------------

// rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.

//------------------------------------------------------------------------------

void	rrb(t_list *stacks)
{
	t_list_b	*tmp;
	t_list_b	*end;

	if (!stacks->b || !stacks->b->next)
		return ;
	tmp = stacks->b;
	while (tmp->next->next)
		tmp = tmp->next;
	end = tmp->next;
	tmp->next = NULL;
	end->next = stacks->b;
	stacks->b = end;
	ft_printf("rrb\n");
}
