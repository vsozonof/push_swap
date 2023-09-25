/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_cell.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:25:21 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/25 04:30:17 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_a	*ft_create_cell_a(int data)
{
	t_list_a	*cell;

	cell = malloc(sizeof(t_list_a));
	if (!cell)
		return (NULL);
	cell->data = data;
	cell->next = NULL;
	return (cell);
}

t_list_b	*ft_create_cell_b(int data)
{
	t_list_b	*cell;

	cell = malloc(sizeof(t_list_b));
	if (!cell)
		return (NULL);
	cell->data = data;
	cell->next = NULL;
	return (cell);
}

t_list_tmp	*ft_create_cell_tmp(int data)
{
	t_list_tmp	*cell;

	cell = malloc(sizeof(t_list_tmp));
	if (!cell)
		return (NULL);
	cell->data = data;
	cell->next = NULL;
	return (cell);
}
