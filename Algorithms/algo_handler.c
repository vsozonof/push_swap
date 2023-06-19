/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:37:04 by vsozonof          #+#    #+#             */
/*   Updated: 2023/06/13 10:27:44 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_handler(t_list *stacks)
{
	t_list_b	*stack_b;

	stack_b = stacks->b;
	if (ft_lstlen_a(stacks->a) <= 3)
		basic_algo(stacks);
}