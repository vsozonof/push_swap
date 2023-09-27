/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_setter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 07:51:55 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/26 09:20:42 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pos_setter(t_list *stacks)
{
	t_list_a	*ptr;
	int			pos;

	pos = 1;
	ptr = stacks->a;
	while (ptr)
	{
		ptr->pos = pos;
		pos++;
		ptr = ptr->next;
	}
}