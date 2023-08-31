/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:42:55 by vsozonof          #+#    #+#             */
/*   Updated: 2023/08/30 16:56:44 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	medium_algo(t_list *stacks)
{
	if (ft_is_reversed(stacks))
		return (ft_medium_reversed_sort(stacks));
}
