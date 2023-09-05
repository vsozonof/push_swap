/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_sec_lowest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:33:24 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/05 15:16:14 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_second_lowest(t_list *stacks)
{	
	int	pos;
	int	lwst_pos;
	int	s_lwst_pos;

	pos = 0;
	s_lwst_pos = -1;
	lwst_pos = ft_find_lowest(stacks);
	while (pos < ft_lstlen_a(stacks->a))
	{
		if (pos != lwst_pos)
		{
			if ((ft_get_at_a(stacks->a, pos) > ft_get_at_a(stacks->a, lwst_pos)
					&& ft_get_at_a(stacks->a, s_lwst_pos)
					> ft_get_at_a(stacks->a, pos))
				|| s_lwst_pos == -1)
				s_lwst_pos = pos;
			pos++;
		}
		else
			pos++;
	}
	ft_printf("value sec lowest : %i\n", s_lwst_pos);
	return (s_lwst_pos);
}
