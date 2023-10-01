/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 06:35:01 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/29 22:32:12 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hard_algo(t_list *stacks)
{
	chunk_move_to_b_100(stacks);
	medium_algo(stacks);
	chunk_move_to_a_100(stacks);
}
