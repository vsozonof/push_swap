/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_thrd_lwst_seq_sorter.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 01:39:49 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/25 04:29:56 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_thrd_lowest_sequence_handler(t_list *stacks)
{
	if (ft_digits_sequence_detector(stacks, 2, 2) == 0)
		ft_thrd_lowest_seq_sorter_a(stacks);
	else if (ft_digits_sequence_detector(stacks, 2, 2) == 1)
		ft_thrd_lowest_seq_sorter_b(stacks);
	else if (ft_digits_sequence_detector(stacks, 2, 2) == 2)
		ft_thrd_lowest_seq_sorter_c(stacks);
}

void	ft_thrd_lowest_seq_sorter_a(t_list *stacks)
{
	if (ft_find_lowest(stacks) == 3)
	{
		rra(stacks, 0);
		rra(stacks, 0);
	}
	else
	{
		rra(stacks, 0);
		rra(stacks, 0);
		sa(stacks, 0);
	}
}

void	ft_thrd_lowest_seq_sorter_b(t_list *stacks)
{
	if (ft_find_lowest(stacks) == 4)
		rra(stacks, 0);
	else
	{
		rra(stacks, 0);
		sa(stacks, 0);
	}
}

void	ft_thrd_lowest_seq_sorter_c(t_list *stacks)
{
	sa(stacks, 0);
}
