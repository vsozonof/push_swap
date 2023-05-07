/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_put_to_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:23:57 by vsozonof          #+#    #+#             */
/*   Updated: 2023/05/07 13:55:23 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//						-⛓️- Creating Stack A -⛓️-
//------------------------------------------------------------------------------

// This function will convert all the arguments to an integer and place them
// in our stack A, represented by a linked list.

//------------------------------------------------------------------------------

int	m_put_to_lst(char **stash, t_list *stacks)
{
	int			i;
	t_list_a	*stack_a;

	stack_a = stacks->a;
	i = 1;
	while (stash[i])
	{
		stack_a = ft_add_at_a(stack_a, ft_atoi(stash[i]), i - 1);
		i++;
	}
	stacks->a = stack_a;
	return (1);
}
