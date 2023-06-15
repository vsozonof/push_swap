/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:40:45 by vsozonof          #+#    #+#             */
/*   Updated: 2023/06/15 10:14:14 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//							--- Reverse Rotate A ---
//------------------------------------------------------------------------------

// rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.

//------------------------------------------------------------------------------

void	rra(t_list *stacks)
{
	t_list_a	*tmp;
	t_list_a	*end;

	if (!stacks->a || !stacks->a->next)
		return ;
	tmp = stacks->a;
	while (tmp->next->next)
		tmp = tmp->next;
	end = tmp->next;
	tmp->next = NULL;
	end->next = stacks->a;
	stacks->a = end;
	ft_printf("rra\n");
}
