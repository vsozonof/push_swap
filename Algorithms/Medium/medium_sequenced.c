/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sequenced.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:47:18 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/25 04:27:57 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	medium_sequenced_sorter(t_list *stacks)
{
	if (ft_find_sorted_sequence(stacks) == 4)
		medium_four_digits_sequence(stacks);
	else if (ft_find_sorted_sequence(stacks) == 3)
		medium_three_digits_sequence(stacks);
}

void	medium_three_digits_sequence(t_list *stacks)
{
	if (ft_digits_sequence_detector(stacks, 2, 2) == ft_find_lowest(stacks))
		ft_lowest_sequence_handler(stacks);
	else if (ft_digits_sequence_detector(stacks, 2, 2)
		== ft_find_second_lowest(stacks))
		ft_sec_lowest_sequence_handler(stacks);
	else
		ft_thrd_lowest_sequence_handler(stacks);
}

void	medium_four_digits_sequence(t_list *stacks)
{
	if ((ft_find_biggest(stacks) + 1) == 1)
		ra(stacks, 0);
	else if ((ft_find_lowest(stacks) + 1) == 5)
		rra(stacks, 0);
}
