/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:33:33 by vsozonof          #+#    #+#             */
/*   Updated: 2023/05/13 14:51:52 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//								--- Push A ---
//------------------------------------------------------------------------------

// pa (push a): Take the first element at the top of b
// and put it at the top of a.
// Do nothing if b is empty.

//------------------------------------------------------------------------------

void	pa(t_list *stacks)
{
	t_list_a	*new_a_head;
	t_list_b	*new_b_head;

	if (!stacks->b)
		return ;
	new_b_head = stacks->b;
	stacks->b = new_b_head->next;
	new_a_head = ft_add_at_a(stacks->a, new_b_head->data, 0);
	if (!new_a_head)
		return ;
	stacks->a = new_a_head;
	free(new_b_head);
}
