/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sequenced.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:47:18 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/08 06:52:58 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	medium_sequenced_sorter(t_list *stacks)
{
	if (ft_find_sorted_sequence(stacks) == 4)
		medium_four_digits_sequence(stacks);
	
}

void	medium_four_digits_sequence(t_list *stacks)
{
	if (ft_find_biggest(stacks) + 1 == 1)
		ra(stacks, 0);
	// else if ()
}
