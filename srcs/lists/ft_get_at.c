/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:28:32 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/17 12:42:27 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	getat(t_list *L, int pos)
{
	int	i;

	i = 0;
	if (L == NULL)
		return (0);
	while (i < pos)
	{
		i++;
		L = L->next;
	}
	return (L->data);
}