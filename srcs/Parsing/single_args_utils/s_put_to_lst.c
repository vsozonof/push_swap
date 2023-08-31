/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_put_to_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:31:14 by vsozonof          #+#    #+#             */
/*   Updated: 2023/08/04 18:26:07 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//!-----------------------------------------------------------------------------
//!						-⛓️- Creating Stack A -⛓️-
//!-----------------------------------------------------------------------------

//* This function will convert all the arguments to an integer and place them
//* in our stack A, represented by a linked list.

//!-----------------------------------------------------------------------------

int	s_put_to_lst(char **stash, t_list *stacks)
{
	int			i;
	t_list_a	*stack_a;

	stack_a = stacks->a;
	i = 0;
	while (stash[i])
	{
		stack_a = ft_add_at_a(stack_a, ft_atoi(stash[i]), i);
		i++;
	}
	stacks->a = stack_a;
	return (1);
}
