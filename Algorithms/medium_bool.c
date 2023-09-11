/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_bool.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:31:53 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/11 00:26:02 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	first_move_handler(t_list *stacks)
{
	int	n_act_a;
	int	n_act_b;
	int	lowest;
	int	sec_lowest;

	lowest = (ft_find_lowest(stacks) + 1);
	sec_lowest = (ft_find_second_lowest(stacks) + 1);
	n_act_a = (five_digits_actions(lowest)
			+ four_digits_calculator(sec_lowest, lowest));
	n_act_b = (five_digits_actions(sec_lowest)
			+ four_digits_a(lowest, sec_lowest));
	if (n_act_a > n_act_b)
		return (2);
	else
		return (1);
}
