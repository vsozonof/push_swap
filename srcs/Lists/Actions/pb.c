/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:48:09 by vsozonof          #+#    #+#             */
/*   Updated: 2023/08/25 13:34:33 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//								--- Push B ---
//------------------------------------------------------------------------------

// pb (push b): Take the first element at the top of a
// and put it at the top of b.
// Do nothing if a is empty.

//------------------------------------------------------------------------------

void	pb(t_list *stacks)
{
	t_list_a	*new_a_head;
	t_list_b	*new_b_head;

	if (!stacks->a)
		return ;
	new_a_head = stacks->a;
	stacks->a = new_a_head->next;
	new_b_head = ft_add_at_b(stacks->b, new_a_head->data, 0);
	if (!new_b_head)
		return ;
	stacks->b = new_b_head;
	free(new_a_head);
	ft_printf("pb\n");
}
