/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 06:35:01 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/27 15:00:36 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hard_algo(t_list *stacks)
{
	chunk_move_to_b_100(stacks);
}

void	chunk_move_to_b_100(t_list *stacks)
{
	int	len;

	len = ft_lstlen_a(stacks->a);
	while (stacks->a && len > 3)
	{
		if (len <= 20)
			chunk_mover_100(stacks, 100, 16);
		else if (len <= 40)
			chunk_mover_100(stacks, 80, 19);
		else if (len <= 60)
			chunk_mover_100(stacks, 60, 19);
		else if (len <= 80)
			chunk_mover_100(stacks, 40, 19);
		else if (len <= 100)
			chunk_mover_100(stacks, 20, 19);
		len = ft_lstlen_a(stacks->a);
	}
}

void	chunk_move_to_a_100(t_list *stacks)
{
	int	len;

	len = ft_lstlen_b(stacks->b);
	while (stacks->b && len > 3)
	{
		// if (len <= 20)
		// 	chunk_mover_100(stacks, 100, 16);
		// else if (len <= 40)
		// 	chunk_mover_100(stacks, 80, 19);
		// else if (len <= 60)
		// 	chunk_mover_100(stacks, 60, 19);
		// else if (len <= 80)
		// 	chunk_mover_100(stacks, 40, 19);
	 	if (len <= 100)
			chunk_mover_100(stacks, 100, 16);
		len = ft_lstlen_b(stacks->b);
	}
}

void	chunk_mover_100(t_list *stacks, int i_max, int n)
{
	t_list_a	*ptr;

	ptr = stacks->a;
	ft_add_prev_ptr(stacks);
	chunk_digit_mover_to_b_100(stacks, i_max);
	while (n > 0)
	{
		ft_add_prev_ptr(stacks);
		chunk_digit_mover_to_b_100(stacks, i_max);
		n--;
	}
	if (i_max == 20 || i_max == 40)
		chunk_sorter_100(stacks);
}

void	chunk_sorter_100(t_list *stacks)
{
	(void)stacks;
}

int	chunk_digit_mover_to_a_100(t_list *stacks, int i_max)
{
	int	n1;
	int	n2;

	n1 = top_to_bot_scanner(stacks, i_max);
	n2 = bot_to_top_scanner(stacks, i_max) + 1;
	if (n1 < n2 || n1 == n2)
	{
		while (n1 > 1)
		{
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
	return (-1);
}

int	chunk_digit_mover_to_b_100(t_list *stacks, int i_max)
{
	int	n1;
	int	n2;

	n1 = top_to_bot_scanner(stacks, i_max);
	n2 = bot_to_top_scanner(stacks, i_max) + 1;
	if (n1 < n2 || n1 == n2)
	{
		while (n1 > 1)
		{
			top_or_bot_moving_100(stacks, 1, n1);
			n1--;
		}
	}
	else if (n2 < n1)
	{
		while (n2 > 1)
		{
			top_or_bot_moving_100(stacks, 2, n2);
			n2--;
		}
	}
	pb(stacks);
	return (-1);
}

void	top_or_bot_moving_100(t_list *stacks, int mode, int n)
{
	(void)mode, (void)n;
	if (mode == 1)
	{	
		// if (move_optimizer_100(stacks, mode, n))
		// 	rr(stacks);
		// else
			ra(stacks, 0);
	}
	else if (mode == 2)
	{
		// if (move_optimizer_100(stacks, mode, n))
		// 	rrr(stacks);
		// else
			rra(stacks, 0);
	}
}

int	move_optimizer_100(t_list *stacks, int mode, int n)
{
	t_list_b	*ptr;
	t_list_b	*last;

	ptr = stacks->b;
	last = stacks->b;
	(void)mode;
	if (!stacks->b)
		return (0);
	if (ft_lstlen_b(stacks->b) == 2
		&& ptr->data < ptr->next->data && n > 2)
		return (1);
	if (ft_lstlen_b(stacks->b) == 3 && n > 2)
		triple_digit_handler_b(stacks, mode);
	return (0);
}

int	top_to_bot_scanner(t_list *stacks, int i_max)
{
	t_list_a	*ptr;
	int			i;

	i = 1;
	ptr = stacks->a;
	while (ptr)
	{
		if (ptr->index <= i_max)
			return (i);
		else
		{
			ptr = ptr->next;
			i++;
		}
	}
	return (-1);
}

int	bot_to_top_scanner(t_list *stacks, int i_max)
{
	t_list_a	*ptr;
	int			i;

	i = 1;
	ptr = stacks->a;
	while (ptr->next)
		ptr = ptr->next;
	while (ptr)
	{
		if (ptr->index <= i_max)
			return (i);
		else
		{
			ptr = ptr->prev;
			i++;
		}
	}
	return (-1);
}
