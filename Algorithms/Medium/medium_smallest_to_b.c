/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_smallest_to_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:49:47 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/11 00:08:42 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	medium_first_digit_mover(t_list *stacks, int mode)
{
	int	pos;

	if (mode == 1)
	{
		pos = ft_find_lowest(stacks) + 1;
		if (pos >= 1 && pos <= 3)
			first_move_to_b_one(stacks, pos);
		else if (pos >= 4 && pos <= 5)
			first_move_to_b_two(stacks, pos);
	}
	else if (mode == 2)
	{
		pos = ft_find_second_lowest(stacks) + 1;
		if (pos >= 1 && pos <= 3)
			first_move_to_b_one(stacks, pos);
		else if (pos >= 4 && pos <= 5)
			first_move_to_b_two(stacks, pos);
	}
}

void	first_move_to_b_one(t_list *stacks, int pos)
{
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
}

void	first_move_to_b_two(t_list *stacks, int pos)
{
	if (pos == 4)
	{
		rra(stacks, 0);
		rra(stacks, 0);
		pb(stacks);
	}
	else if (pos == 5)
	{
		rra(stacks, 0);
		pb(stacks);
	}
}
