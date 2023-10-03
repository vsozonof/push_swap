/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expert_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 08:21:02 by vsozonof          #+#    #+#             */
/*   Updated: 2023/10/03 09:41:01 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	expert_algo(t_list *stacks)
{
	int	len_a;
	int	len_b;

	len_a = ft_lstlen_a(stacks->a);
	chunk_move_to_b_500(stacks, len_a);
	len_b = ft_lstlen_b(stacks->b);
	medium_algo(stacks);
	if (len_b % 2 != 0)
	{
		chunk_digit_mover(stacks, len_b, len_b - 1);
		pa(stacks);
	}
	else
		chunk_digit_mover(stacks, len_b, len_b);
}
