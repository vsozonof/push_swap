/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_scanner_100.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:20:12 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/30 13:26:03 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	top_to_bot_scanner_a(t_list *stacks, int i_max)
{
	t_list_a	*ptr;
	int			i;

	i = 1;
	ptr = stacks->a;
	while (ptr)
	{
		if (ptr->index <= i_max)
			return (i);
		else
		{
			ptr = ptr->next;
			i++;
		}
	}
	return (-1);
}

int	bot_to_top_scanner_a(t_list *stacks, int i_max)
{
	t_list_a	*ptr;
	int			i;

	i = 1;
	ptr = stacks->a;
	while (ptr->next)
		ptr = ptr->next;
	while (ptr)
	{
		if (ptr->index <= i_max)
			return (i);
		else
		{
			ptr = ptr->prev;
			i++;
		}
	}
	return (-1);
}

int	top_to_bot_scanner_b(t_list *stacks, int i_max)
{
	t_list_b	*ptr;
	int			i;

	i = 1;
	ptr = stacks->b;
	while (ptr)
	{
		if (ptr->index == i_max)
			return (i);
		else
		{
			ptr = ptr->next;
			i++;
		}
	}
	return (-1);
}

int	bot_to_top_scanner_b(t_list *stacks, int i_max)
{
	t_list_b	*ptr;
	int			i;

	i = 1;
	ptr = stacks->b;
	while (ptr->next)
		ptr = ptr->next;
	while (ptr)
	{
		if (ptr->index == i_max)
			return (i);
		else
		{
			ptr = ptr->prev;
			i++;
		}
	}
	return (-1);
}
