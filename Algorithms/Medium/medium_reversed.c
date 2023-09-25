/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_reversed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 23:27:39 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/04 14:16:54 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_medium_reversed_sort(t_list *stacks)
{
	if (ft_lstlen_a(stacks->a) == 4)
	{
		sa(stacks, 0);
		ra(stacks, 0);
		ra(stacks, 0);
		sa(stacks, 0);
	}
	else if (ft_lstlen_a(stacks->a) == 5)
	{
		pb(stacks);
		sa(stacks, 0);
		ra(stacks, 0);
		ra(stacks, 0);
		pa(stacks);
		ra(stacks, 0);
		sa(stacks, 0);
	}
}
