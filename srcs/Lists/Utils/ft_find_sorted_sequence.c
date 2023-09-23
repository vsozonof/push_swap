/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_sorted_sequence.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:57:52 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/23 12:27:07 by vsozonof         ###   ########.fr       */
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
		if (tmp->next->index == (tmp->index + 1))
		{
			i++;
			if (i == seqlen)
				return (1);
		}
		else
			i = 0;
		tmp = tmp->next;
	}
	return (0);
}
