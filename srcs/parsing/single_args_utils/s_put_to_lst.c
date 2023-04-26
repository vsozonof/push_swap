/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_put_to_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:31:14 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/26 15:40:53 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	s_put_to_lst(char **stash, t_list *stacks)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stash[i])
	{
		ft_add_at_a(stacks->a_next, ft_atoi(stash[i]), j);
		if (!stacks->a_next)
			return (0);
		j++;
		i++;
	}
	return (1);
}