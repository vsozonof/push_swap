/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 06:35:01 by vsozonof          #+#    #+#             */
/*   Updated: 2023/10/03 03:30:58 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hard_algo(t_list *stacks)
{
	ft_printf("aaaaaa\n");
	chunk_move_to_b_100(stacks);
	ft_printf("bbbbbbb\n");
	medium_algo(stacks);
	chunk_digit_mover(stacks, 95, 94);
	pa(stacks);
}
