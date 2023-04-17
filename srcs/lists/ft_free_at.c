/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:28:53 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/17 12:42:15 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *freeat(t_list *L, int pos)
{
	t_list	*prec;
	t_list	*cur;
	int		i;

	cur = L;
	prec = L;
	i = 0;
	if (pos == 0)
	{
		L = L->next;
		free(cur);
		return (NULL);
	}
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = cur->next;
	free(cur);
	return (L);
}