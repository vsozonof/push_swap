/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sec_smlst_to_b.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:08:26 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/11 00:26:08 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	medium_second_digit_mover(t_list *stacks, int mode)
{
	int	pos;

	if (mode == 1)
		pos = ft_find_second_lowest(stacks) + 1;
	else
		pos = ft_find_lowest(stacks) + 1;
	if (pos == 1)
		pb(stacks);
	else if (pos == 2)
	{
		sa(stacks, 0);
		pb(stacks);
	}
	else if (pos == 3)
	{
		ra(stacks, 0);
		ra(stacks, 0);
		pb(stacks);
	}
	else
	{
		rra(stacks, 0);
		pb(stacks);
	}
}
