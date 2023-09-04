/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_sec_lowest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:33:24 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/04 14:16:58 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_second_lowest(t_list *stacks, int l_pos)
{
	int	n;
	int	pos;
	int	n_pos;

	pos = 0;
	n_pos = 0;
	n = ft_get_at_a(stacks->a, pos);
	while (pos < ft_lstlen_a(stacks->a))
	{
		if (n > ft_get_at_a(stacks->a, pos) && pos != l_pos)
		{
			n = ft_get_at_a(stacks->a, pos);
			n_pos = pos;
		}
		else
			pos++;
	}
	return (n_pos);
}
