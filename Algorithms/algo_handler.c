/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:37:04 by vsozonof          #+#    #+#             */
/*   Updated: 2023/08/25 13:18:10 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_handler(t_list *stacks)
{
	t_list_b	*stack_b;
	int			nbrs;

	stack_b = stacks->b;
	nbrs = ft_lstlen_a(stacks->a);
	(void)stack_b;
	if (ft_is_sorted(stacks))
		return ;
	if (nbrs <= 3)
		basic_algo(stacks);
	if (nbrs > 3 && nbrs <= 5)
		medium_algo(stacks);
}
