/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_mover_to_a_100.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:18:41 by vsozonof          #+#    #+#             */
/*   Updated: 2023/10/02 21:15:11 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_move_to_a_100(t_list *stacks)
{
	// int	len;

	// len = ft_lstlen_b(stacks->b);
	// while (stacks->b)
	// {
	// 	if (len <= 20)
	// 		chunk_mover_a_100(stacks, 20, 20);
	// 	else if (len <= 40)
	// 		chunk_mover_a_100(stacks, 40, 20);
	// 	else if (len <= 60)
	// 		chunk_mover_a_100(stacks, 60, 20);
	// 	else if (len <= 80)
	// 		chunk_mover_a_100(stacks, 80, 20);
	// 	else if (len <= 100)
	// 		chunk_mover_a_100(stacks, 95, 15);
	// 	len = ft_lstlen_b(stacks->b);
	// }
	chunk_digit_mvr(stacks, 95, 15);
}

void	chunk_mover_a_100(t_list *stacks, int i_max, int n)
{
	while (n > 0)
	{
		ft_add_prev_ptr_b(stacks);
		chunk_digit_mover_to_a_100(stacks, i_max);
		i_max--;
		n--;
	}
}

void	chunk_digit_mover_to_a_100(t_list *stacks, int i_max)
{
	int	n1;
	int	n2;

	n1 = top_to_bot_scanner_b(stacks, i_max);
	n2 = bot_to_top_scanner_b(stacks, i_max) + 1;
	if (n1 < n2 || n1 == n2)
	{
		while (n1 > 1)
		{
			if (n1 == 2 && stacks->b->index <= i_max)
				sb(stacks, 0);
			else
				rb(stacks, 0);
			n1--;
		}
	}
	else if (n2 < n1)
	{
		while (n2 > 1)
		{
			rrb(stacks, 0);
			n2--;
		}
	}
	pa(stacks);
}

void	chunk_digit_mvr(t_list *stacks, int i_max, int n)
{
	while (n > 0)
	{
		ft_add_prev_ptr_b(stacks);
		pair_digit_system_handler(stacks, i_max);
		i_max--;
		n--;
	}
	ft_printlst_a(stacks->a);
}

void	pair_digit_system_handler(t_list *stacks, int i_max)
{
	int	*tab;
	int	mode;

	tab = malloc(sizeof(int) * 4);
	first_digit_calculator(stacks, tab, i_max);
	sec_digit_calculator(stacks, tab, i_max - 1);
	mode = cheapest_move_selector(tab);
	pair_digit_system_mover(stacks, tab, i_max, mode);
}

void	pair_digit_system_mover(t_list *stacks, int *tab, int i_max, int mode)
{
	if (mode == 1)
	{
		first_digit_mover_100(stacks, tab[0], tab[1], i_max);
	}
}

void	first_digit_mover_100(t_list *stacks, int mode, int n, int i_max)
{
	if (mode == 1)
	{
		while (n > 1)
		{
			if (n == 2 && stacks->b->index <= i_max)
				sb(stacks, 0);
			else
				rb(stacks, 0);
			n--;
		}
	}
	else if (mode == 2)
	{
		while (n > 1)
		{
			rrb(stacks, 0);
			n--;
		}
	}
}

void	second_digit_mover_100(t_list *stacks, int mode, int n, int i_max)
{
	
}

void	update_cost_after_move(t_list *stacks, int i_max, int *tab)
{
	
}
int	cheapest_move_selector(int *tab)
{
	if (tab[1] < tab[3] || tab[1] == tab[3])
		return (1);
	else
		return (2);
}

void	first_digit_calculator(t_list *stacks, int *tab, int i_max)
{
	if (top_to_bot_scanner_b(stacks, i_max)
		< (bot_to_top_scanner_b(stacks, i_max) + 1))
	{
		tab[0] = 1;
		tab[1] = top_to_bot_scanner_b(stacks, i_max);
	}
	else if (top_to_bot_scanner_b(stacks, i_max)
		> (bot_to_top_scanner_b(stacks, i_max) + 1))
	{
		tab[0] = 2;
		tab[1] = bot_to_top_scanner_b(stacks, i_max) + 1;
	}
}

void	sec_digit_calculator(t_list *stacks, int *tab, int i_max)
{
	if (top_to_bot_scanner_b(stacks, i_max)
		< (bot_to_top_scanner_b(stacks, i_max) + 1))
	{
		tab[2] = 1;
		tab[3] = top_to_bot_scanner_b(stacks, i_max);
	}
	else if (top_to_bot_scanner_b(stacks, i_max)
		> (bot_to_top_scanner_b(stacks, i_max) + 1))
	{
		tab[2] = 2;
		tab[3] = bot_to_top_scanner_b(stacks, i_max) + 1;
	}
}