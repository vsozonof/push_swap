/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:35:11 by vsozonof          #+#    #+#             */
/*   Updated: 2023/05/07 13:45:43 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//							--- Stacks Initialization ---
//------------------------------------------------------------------------------

// This function will simply initialize our stacks A and B so we can use
// them once the arguments verification is done.

//------------------------------------------------------------------------------

void	init_stacks(t_list *stacks)
{
	stacks->a = NULL;
	stacks->b = NULL;
}
