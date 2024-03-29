/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 06:35:01 by vsozonof          #+#    #+#             */
/*   Updated: 2023/10/03 08:17:52 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hard_algo(t_list *stacks)
{
	int	len;

	chunk_move_to_b_100(stacks);
	len = ft_lstlen_b(stacks->b);
	medium_algo(stacks);
	if (len % 2 != 0)
	{
		chunk_digit_mover(stacks, len, len - 1);
		pa(stacks);
	}
	else
		chunk_digit_mover(stacks, len, len);
}
