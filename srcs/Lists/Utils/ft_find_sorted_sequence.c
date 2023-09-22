/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_sorted_sequence.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:57:52 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/22 13:49:56 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_sorted_sequence(t_list *stacks)
{
	if (ft_digits_sequence_detector(stacks, 3))
		return (4);
	else if (ft_digits_sequence_detector(stacks, 2))
		return (3);
	else
		return (0);
}

int	ft_digits_sequence_detector(t_list *stacks, int seqlen)
{
	t_list_tmp		*tmp;
	int				i;

	i = 0;
	tmp = stacks->tmp;
	while (tmp && tmp->next)
	{
		ft_printf("index = %i - next index = %i\n", tmp->index, tmp->next->index);
		if (tmp->index > tmp->next->index)
			i = 0;
		else if (tmp->next->index == (tmp->index + 1))
		{	
			ft_printf("boop\n");
			i++;
			if (i == seqlen)
				return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
