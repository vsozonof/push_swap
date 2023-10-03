/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_mover_to_b_500.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 08:51:15 by vsozonof          #+#    #+#             */
/*   Updated: 2023/10/03 09:58:39 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_move_to_b_500(t_list *stacks, int len)
{
	while (stacks->a && len > 5)
	{
		if (len <= 50)
			chunk_mover_b_500(stacks, 495, 45);
		else if (len <= 100)
			chunk_mover_b_500(stacks, 450, 50);
		else if (len <= 150)
			chunk_mover_b_500(stacks, 400, 50);
		else if (len <= 200)
			chunk_mover_b_500(stacks, 350, 50);
		else if (len <= 250)
			chunk_mover_b_500(stacks, 300, 50);
		else if (len <= 300)
			chunk_mover_b_500(stacks, 250, 50);
		else if (len <= 350)
			chunk_mover_b_500(stacks, 200, 50);
		else if (len <= 400)
			chunk_mover_b_500(stacks, 150, 50);
		else if (len <= 450)
			chunk_mover_b_500(stacks, 100, 50);
		else if (len <= 500)
			chunk_mover_b_500(stacks, 50, 50);
		len = ft_lstlen_a(stacks->a);
	}
}

void	chunk_mover_b_500(t_list *stacks, int i_max, int n)
{
	while (n > 0)
	{
		ft_add_prev_ptr_a(stacks);
		chunk_digit_mover_to_b_500(stacks, i_max);
		n--;
	}
}

void	chunk_digit_mover_to_b_500(t_list *stacks, int i_max)
{
	int	n1;
	int	n2;

	n1 = top_to_bot_scanner_a(stacks, i_max);
	n2 = bot_to_top_scanner_a(stacks, i_max) + 1;
	if (n1 < n2 || n1 == n2)
	{
		while (n1 > 1)
		{
			top_or_bot_moving_500(stacks, 1, i_max);
			n1--;
		}
	}
	else if (n2 < n1)
	{
		while (n2 > 1)
		{
			top_or_bot_moving_500(stacks, 2, i_max);
			n2--;
		}
	}
	pb(stacks);
}

void	top_or_bot_moving_500(t_list *stacks, int mode, int i_max)
{
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
