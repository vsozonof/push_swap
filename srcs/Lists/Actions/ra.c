/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:56:34 by vsozonof          #+#    #+#             */
/*   Updated: 2023/05/13 15:17:50 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//								--- Rotate A ---
//------------------------------------------------------------------------------

// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.

//------------------------------------------------------------------------------

void	ra(t_list *stacks)
{
	t_list_a	*head;
	t_list_a	*end;

	head = stacks->a;
	stacks->a = stacks->a->next;
	end = stacks->a;
	while (end->next != NULL)
		end = end->next;
	end->next = head;
	head->next = NULL;
}
