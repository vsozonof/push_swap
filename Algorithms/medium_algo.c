/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:42:55 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/23 23:26:45 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	medium_algo(t_list *stacks)
{
	if (ft_is_reversed(stacks))
		return (ft_medium_reversed_sort(stacks));
	else if (!ft_find_sorted_sequence(stacks)
		&& (actions_calculator(stacks) <= 3))
	{
		ft_printf("1st if\n");
		if (first_move_handler(stacks) == 1)
		{
			ft_printf("-> lowest first\n");
			medium_first_digit_mover(stacks, 1);
			medium_second_digit_mover(stacks, 2);
			triple_digit_handler(stacks, 1);
			medium_move_back_to_b(stacks);
		}
		else if (first_move_handler(stacks) == 2)
		{
			ft_printf("-> 2nd lowest first\n");
			medium_first_digit_mover(stacks, 2);
			medium_second_digit_mover(stacks, 2);
			triple_digit_handler(stacks, 2);
			medium_move_back_to_b(stacks);
		}
	}
	else if (!ft_find_sorted_sequence(stacks)
		&& (actions_calculator(stacks) >= 4))
	{
		ft_printf("2nd if\n");
		if (first_move_handler(stacks) == 1)
			{
			ft_printf("-> lowest first\n");
			}
		else if (first_move_handler(stacks) == 2)
			{
			ft_printf("-> 2nd lowest first\n");
			}
	}
}

void	medium_sorter(t_list *stacks)
{
	(void)stacks;
}
