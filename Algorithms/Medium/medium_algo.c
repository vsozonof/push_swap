/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:42:55 by vsozonof          #+#    #+#             */
/*   Updated: 2023/10/03 08:07:42 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	medium_algo(t_list *stacks)
{
	if (ft_is_reversed(stacks))
		return (ft_medium_reversed_sort(stacks));
	else if ((actions_calculator(stacks) <= 5))
	{
		if (first_move_handler(stacks) == 1)
		{
			medium_first_digit_mover(stacks, 1);
			medium_second_digit_mover(stacks, 2);
			triple_digit_handler(stacks, 1);
			medium_move_back_to_b(stacks);
		}
		else if (first_move_handler(stacks) == 2)
		{
			medium_first_digit_mover(stacks, 2);
			medium_second_digit_mover(stacks, 2);
			triple_digit_handler(stacks, 2);
			medium_move_back_to_b(stacks);
		}
	}
	else if (ft_find_sorted_sequence(stacks))
		medium_sequenced_sorter(stacks);
}
