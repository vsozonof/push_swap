/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_calculator_100.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 02:51:54 by vsozonof          #+#    #+#             */
/*   Updated: 2023/10/03 03:35:27 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	update_actions_cost(t_list *stacks, int i_max, int *tab, int mode)
{
	if (mode == 1)
		n_actions_calculator(stacks, tab, i_max, 2);
	else
		n_actions_calculator(stacks, tab, i_max, 1);
}

void	n_actions_calculator(t_list *stacks, int *tab, int i_max, int mode)
{
	int	n1;
	int	n2;

	n1 = top_to_bot_scanner_b(stacks, i_max);
	n2 = bot_to_top_scanner_b(stacks, i_max) + 1;
	if (mode == 1)
		digit_actions_calculator_a(tab, n1, n2);
	else if (mode == 2)
		digit_actions_calculator_b(tab, n1, n2);
}

void	digit_actions_calculator_a(int *tab, int n1, int n2)
{
	if (n1 < n2 || n1 == n2)
	{
		tab[0] = 1;
		tab[1] = n1;
	}
	else
	{
		tab[0] = 2;
		tab[1] = n2;
	}
}

void	digit_actions_calculator_b(int *tab, int n1, int n2)
{
	if (n1 < n2 || n1 == n2)
	{
		tab[2] = 1;
		tab[3] = n1;
	}
	else
	{
		tab[2] = 2;
		tab[3] = n2;
	}
}
