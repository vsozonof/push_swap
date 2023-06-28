/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:33:21 by vsozonof          #+#    #+#             */
/*   Updated: 2023/06/28 11:14:46 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest(t_list *stacks)
{
	int			pos;
	int			n;
	int			i;

	i = ft_lstlen_a(stacks->a);
	pos = 0;
	n = 0;
	while (n <= i)
	{
		ft_get_at_a(stacks->a, n);
	}
	return (pos);
}