/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_prev_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:12:51 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/27 11:13:11 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_prev_ptr(t_list *stacks)
{
	t_list_a	*ptr;
	t_list_a	*tmp;

	tmp = NULL;
	ptr = stacks->a;
	while (ptr)
	{
		ptr->prev = tmp;
		tmp = ptr;
		ptr = ptr->next;
	}
}