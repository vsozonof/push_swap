/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_algo_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:17:16 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/27 12:26:47 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	basic_algo(t_list *stacks)
{
	if (ft_lstlen_a(stacks->a) == 2)
		return (double_digit_sorter(stacks));
	else if (ft_lstlen_a(stacks->a) == 3)
		return (triple_digit_handler(stacks, 1));
}

void	double_digit_sorter(t_list *stacks)
{
	if (stacks->a->data > stacks->a->next->data)
		return (sa(stacks, 0));
	else
		return ;
}

void	triple_digit_handler(t_list *stacks, int mode)
{
	int	first;
	int	second;
	int	third;

	first = ft_get_at_a(stacks->a, 0);
	second = ft_get_at_a(stacks->a, 1);
	third = ft_get_at_a(stacks->a, 2);
	if (mode == 1)
		return (triple_digit_sorter(stacks, first, second, third));
	else if (mode == 2)
		return (triple_digit_sorter_spe(stacks, first, second, third));
}

void	triple_digit_sorter(t_list *stacks, int n1, int n2, int n3)
{
	if (n1 > n2 && n2 > n3 && n1 > n3)
	{
		sa(stacks, 0);
		rra(stacks, 0);
	}
	else if (n1 > n2 && n2 < n3 && n1 > n3)
		ra(stacks, 0);
	else if (n1 > n2 && n2 < n3 && n1 < n3)
		sa(stacks, 0);
	else if (n1 < n2 && n2 > n3 && n1 > n3)
		rra(stacks, 0);
	else if (n1 < n2 && n2 > n3 && n1 < n3)
	{
		sa(stacks, 0);
		ra(stacks, 0);
	}
	return ;
}

void	triple_digit_sorter_spe(t_list *stacks, int n1, int n2, int n3)
{
	if (n1 > n2 && n2 > n3 && n1 > n3)
	{
		ss(stacks);
		rra(stacks, 0);
	}
	else if (n1 > n2 && n2 < n3 && n1 > n3)
		rr(stacks);
	else if (n1 > n2 && n2 < n3 && n1 < n3)
		ss(stacks);
	else if (n1 < n2 && n2 > n3 && n1 > n3)
		rrr(stacks);
	else if (n1 < n2 && n2 > n3 && n1 < n3)
	{
		ss(stacks);
		ra(stacks, 0);
	}
	else
		sb(stacks, 0);
	return ;
}
