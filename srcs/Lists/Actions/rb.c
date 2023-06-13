/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:27:44 by vsozonof          #+#    #+#             */
/*   Updated: 2023/05/13 15:30:42 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//								--- Rotate B ---
//------------------------------------------------------------------------------

// rb (rotate b): Shift up all elements of stack a by 1.
// The first element becomes the last one.

//------------------------------------------------------------------------------

void	rb(t_list *stacks)
{
	t_list_b	*head;
	t_list_b	*end;

	head = stacks->b;
	stacks->b = stacks->b->next;
	end = stacks->b;
	while (end->next != NULL)
		end = end->next;
	end->next = head;
	head->next = NULL;
}
