/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_mover_to_a_100.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:18:41 by vsozonof          #+#    #+#             */
/*   Updated: 2023/10/03 03:33:58 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_digit_mover(t_list *stacks, int i_max, int n)
{
	while (n > 0)
	{
		ft_add_prev_ptr_b(stacks);
		pair_digit_system_handler(stacks, i_max);
		i_max -= 2;
		n -= 2;
	}
}

void	pair_digit_system_handler(t_list *stacks, int i_max)
{
	int	*tab;

	tab = malloc(sizeof(int) * 4);
	n_actions_calculator(stacks, tab, i_max, 1);
	n_actions_calculator(stacks, tab, (i_max - 1), 2);
	pair_digit_system_mover(stacks, tab, i_max);
	free(tab);
}

void	pair_digit_system_mover(t_list *stacks, int *tab, int i_max)
{
	if (tab[1] < tab[3] || tab[1] == tab[3])
	{
		digit_mover_100(stacks, tab[0], tab[1], i_max);
		ft_add_prev_ptr_b(stacks);
		update_actions_cost(stacks, (i_max - 1), tab, 1);
		digit_mover_100(stacks, tab[2], tab[3], (i_max - 1));
	}
	else
	{
		digit_mover_100(stacks, tab[2], tab[3], (i_max - 1));
		ft_add_prev_ptr_b(stacks);
		update_actions_cost(stacks, i_max, tab, 2);
		digit_mover_100(stacks, tab[0], tab[1], i_max);
		sa(stacks, 0);
	}
}

void	digit_mover_100(t_list *stacks, int mode, int n, int i_max)
{
	if (mode == 1)
	{
		while (n > 1)
		{
			if (n == 2 && stacks->b->index == i_max)
				sb(stacks, 0);
			else
				rb(stacks, 0);
			n--;
		}
	}
	else
	{
		while (n > 1)
		{
			rrb(stacks, 0);
			n--;
		}
	}
	pa(stacks);
}
