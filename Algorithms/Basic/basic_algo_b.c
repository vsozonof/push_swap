/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_algo_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:25:36 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/27 14:28:55 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	triple_digit_handler_b(t_list *stacks, int mode)
{
	int	first;
	int	second;
	int	third;

	first = ft_get_at_b(stacks->b, 0);
	second = ft_get_at_b(stacks->b, 1);
	third = ft_get_at_b(stacks->b, 2);
	if (mode == 1)
		triple_digit_sorter_b(stacks, first, second, third);
	else
		triple_digit_sorter_b_spe(stacks, first, second, third);
}

void	triple_digit_sorter_b(t_list *stacks, int n1, int n2, int n3)
{
	if (n1 < n2 && n2 < n3 && n3 > n1)
	{
		sb(stacks, 0);
		rr(stacks);
	}
	else if (n1 < n2 && n2 > n3 && n3 > n1)
		rr(stacks);
	else if (n1 > n2 && n2 < n3 && n3 > n1)
		rrb(stacks, 0);
	else if (n1 < n2 && n2 > n3 && n3 < n1)
		sb(stacks, 0);
	else if (n1 > n2 && n2 < n3 && n3 < n1)
	{	
		rrb(stacks, 0);
		sb(stacks, 0);
	}
	return ;
}

void	triple_digit_sorter_b_spe(t_list *stacks, int n1, int n2, int n3)
{
	if (n1 < n2 && n2 < n3 && n3 > n1)
	{
		sb(stacks, 0);
		rb(stacks, 0);
	}
	else if (n1 < n2 && n2 > n3 && n3 > n1)
		rb(stacks, 0);
	else if (n1 > n2 && n2 < n3 && n3 > n1)
		rrr(stacks);
	else if (n1 < n2 && n2 > n3 && n3 < n1)
		sb(stacks, 0);
	else if (n1 > n2 && n2 < n3 && n3 < n1)
	{	
		rrr(stacks);
		sb(stacks, 0);
	}
	return ;
}
