/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_sorted_sequence.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:57:52 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/25 03:56:19 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_sorted_sequence(t_list *stacks)
{
	if (ft_digits_sequence_detector(stacks, 3, 1))
		return (4);
	else if (ft_digits_sequence_detector(stacks, 2, 1))
		return (3);
	else
		return (0);
}

// MODE :
// 1 = searches for a sequence
// 2 = returns the starting point of the sequence

int	ft_digits_sequence_detector(t_list *stacks, int seqlen, int mode)
{
	t_list_tmp		*tmp;
	int				i;
	int				s;

	s = 0;
	i = 0;
	tmp = stacks->tmp;
	while (tmp && tmp->next)
	{
		s++;
		if (tmp->next->index == (tmp->index + 1))
		{
			i++;
			if (i == seqlen && mode == 1)
				return (1);
			else if (i == seqlen && mode == 2)
				return (s - i);
		}
		else
			i = 0;
		tmp = tmp->next;
	}
	return (0);
}
