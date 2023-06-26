/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:05:55 by vsozonof          #+#    #+#             */
/*   Updated: 2023/06/19 15:21:12 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//								--- Swap A ---
//------------------------------------------------------------------------------

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.

//------------------------------------------------------------------------------

void	sa(t_list *stacks, int id)
{
	t_list_a	*first;
	t_list_a	*second;
	t_list_a	*tmp;
	t_list_a	**head;

	if (!stacks->a || ft_lstlen_a(stacks->a) == 1)
		return ;
	first = stacks->a;
	second = first->next;
	head = &(stacks->a);
	tmp = second->next;
	second->next = first;
	first->next = tmp;
	*head = second;
	if (id == 0)
		ft_printf("sa\n");
}
