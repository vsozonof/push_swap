/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:08:01 by vsozonof          #+#    #+#             */
/*   Updated: 2023/05/14 23:12:28 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//								--- Swap B ---
//------------------------------------------------------------------------------

// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.

//------------------------------------------------------------------------------

void	sb(t_list *stacks)
{
	t_list_b	*first;
	t_list_b	*second;
	t_list_b	*tmp;
	t_list_b	**head;

	if (!stacks->b || ft_lstlen_b(stacks->b) == 1)
		return ;
	first = stacks->b;
	second = first->next;
	head = &(stacks->b);
	tmp = second->next;
	second->next = first;
	first->next = tmp;
	*head = second;
}
