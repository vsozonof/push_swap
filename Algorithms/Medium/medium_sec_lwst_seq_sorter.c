/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sec_lwst_seq_sorter.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 01:02:12 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/25 01:35:28 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sec_lowest_sequence_handler(t_list *stacks)
{
	if (ft_find_second_lowest(stacks) == 0)
		ft_sec_lowest_seq_sorter_a(stacks);
	else if (ft_find_second_lowest(stacks) == 1)
		ft_sec_lowest_seq_sorter_b(stacks);
	else if (ft_find_second_lowest(stacks) == 2)
		ft_sec_lowest_seq_sorter_c(stacks);
}

void	ft_sec_lowest_seq_sorter_a(t_list *stacks)
{
	rra(stacks, 0);
	rra(stacks, 0);
	sa(stacks, 0);
	ra(stacks, 0);
}

void	ft_sec_lowest_seq_sorter_b(t_list *stacks)
{
	rra(stacks, 0);
	sa(stacks, 0);
	ra(stacks, 0);
}

void	ft_sec_lowest_seq_sorter_c(t_list *stacks)
{
	sa(stacks, 0);
	ra(stacks, 0);
}
