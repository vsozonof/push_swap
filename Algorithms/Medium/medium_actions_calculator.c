/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_calculator.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:33:05 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/11 00:33:56 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	actions_calculator(t_list *stacks)
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
			+ four_digits_calculator(lowest, sec_lowest));
	if (n_act_a > n_act_b)
		return (n_act_b);
	else
		return (n_act_a);
}

int	five_digits_actions(int index)
{
	if (index == 1)
		return (1);
	else if (index == 2)
		return (2);
	else if (index == 3)
		return (3);
	else if (index == 4)
		return (3);
	else if (index == 5)
		return (2);
	else
		return (0);
}

int	four_digits_calculator(int index, int old_index)
{
	if (old_index == 1)
	{
		if (index == 2 || index == 3)
			return (five_digits_actions(index) - 1);
		else if (index == 4 || index == 5)
			return (five_digits_actions(index));
		else
			return (0);
	}
	else if (old_index == 2 || old_index == 3)
		return (four_digits_a(index, old_index));
	else if (old_index == 4 || old_index == 5)
		return (four_digits_b(index, old_index));
	else
		return (0);
}

int	four_digits_a(int index, int old_index)
{
	if (old_index == 2)
	{
		if (index == 1)
			return (five_digits_actions(index));
		else if (index == 3)
			return (five_digits_actions(index) - 1);
		else if (index == 4 || index == 5)
			return (five_digits_actions(index));
		else
			return (0);
	}
	else if (old_index == 3)
	{
		if (index == 1)
			return (3);
		else if (index == 2 || index == 5)
			return (2);
		else if (index == 4)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

int	four_digits_b(int index, int old_index)
{
	if (old_index == 4)
	{
		if (index == 3 || index == 5)
			return (five_digits_actions(index) - 1);
		else if (index == 1 || index == 2)
			return (five_digits_actions(index) + 1);
		else
			return (0);
	}
	else if (old_index == 5)
	{
		if (index == 4)
			return (five_digits_actions(index) - 1);
		else if (index >= 1 && index <= 3)
			return (five_digits_actions(index));
		else
			return (0);
	}
	else
		return (0);
}
