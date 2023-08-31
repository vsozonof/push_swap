/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_lowest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:07:56 by vsozonof          #+#    #+#             */
/*   Updated: 2023/08/23 11:15:03 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_lowest(t_list *stacks)
{
	int	n;
	int	pos;
	int	n_pos;

	pos = 0;
	n_pos = 0;
	n = ft_get_at_a(stacks->a, pos);
	while (pos <= ft_lstlen_a(stacks->a))
	{
		if (n > ft_get_at_a(stacks->a, pos))
		{
			n = ft_get_at_a(stacks->a, pos);
			n_pos = pos;
		}
		else
			pos++;
	}
	return (n_pos);
}
