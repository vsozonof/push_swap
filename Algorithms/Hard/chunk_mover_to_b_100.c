/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_mover_to_b_100.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:17:03 by vsozonof          #+#    #+#             */
/*   Updated: 2023/10/03 03:27:47 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_move_to_b_100(t_list *stacks)
{
	int	len;

	len = ft_lstlen_a(stacks->a);
	while (stacks->a && len > 5)
	{
		if (len <= 20)
		{
			ft_printf("zizizizi\n");
			chunk_mover_b_100(stacks, 95, 15);
		}
		else if (len <= 40)
			chunk_mover_b_100(stacks, 80, 20);
		else if (len <= 60)
			chunk_mover_b_100(stacks, 60, 20);
		else if (len <= 80)
			chunk_mover_b_100(stacks, 40, 20);
		else if (len <= 100)
			chunk_mover_b_100(stacks, 20, 20);
		len = ft_lstlen_a(stacks->a);
	}
}

void	chunk_mover_b_100(t_list *stacks, int i_max, int n)
{
	while (n > 0)
	{
		ft_add_prev_ptr_a(stacks);
		chunk_digit_mover_to_b_100(stacks, i_max);
		n--;
	}
}

void	chunk_digit_mover_to_b_100(t_list *stacks, int i_max)
{
	int	n1;
	int	n2;

	n1 = top_to_bot_scanner_a(stacks, i_max);
	n2 = bot_to_top_scanner_a(stacks, i_max) + 1;
	if (n1 < n2 || n1 == n2)
	{
		while (n1 > 1)
		{
			top_or_bot_moving_100(stacks, 1, n1, i_max);
			n1--;
		}
	}
	else if (n2 < n1)
	{
		while (n2 > 1)
		{
			top_or_bot_moving_100(stacks, 2, n2, i_max);
			n2--;
		}
	}
	pb(stacks);
}

void	top_or_bot_moving_100(t_list *stacks, int mode, int n, int i_max)
{
	(void)n, (void)i_max;
	if (mode == 1)
	{	
		if (i_max == 20 && do_ra_or_rr(stacks, mode))
			rr(stacks);
		else
			ra(stacks, 0);
	}
	else if (mode == 2)
	{
		if (i_max == 20 && do_ra_or_rr(stacks, mode))
			rrr(stacks);
		else
			rra(stacks, 0);
	}
}

int	do_ra_or_rr(t_list *stacks, int mode)
{
	if (ft_lstlen_b(stacks->b) < 2)
		return (0);
	if (mode == 1 && ft_get_at_b(stacks->b, 0)
		> ft_get_at_b(stacks->b, ft_lstlen_b(stacks->b) - 1))
		return (1);
	else if (mode == 2 && ft_get_at_b(stacks->b, 0)
		< ft_get_at_b(stacks->b, ft_lstlen_b(stacks->b) - 1))
		return (1);
	return (0);
}
