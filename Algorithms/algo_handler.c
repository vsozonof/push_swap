/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:37:04 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/25 04:46:45 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_handler(t_list *stacks)
{
	t_list_b	*stack_b;
	int			nbrs;

	stack_b = stacks->b;
	nbrs = ft_lstlen_a(stacks->a);
	ft_tmp_formater(stacks);
	(void)stack_b;
	if (ft_is_sorted(stacks))
		return ;
	if (nbrs <= 3)
		basic_algo(stacks);
	else if (nbrs > 3 && nbrs <= 5)
		medium_algo(stacks);
	// else if (nbrs > 5 && nbrs <= 10)
}
