/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tmp_indexer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 02:53:52 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/25 04:30:30 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_tmp_formater(t_list *stacks)
{
	int			*tab;
	int			i;
	t_list_tmp	*ptr;

	ptr = stacks->tmp;
	i = 0;
	tab = malloc(sizeof(int) * ft_lstlen_a(stacks->a));
	ft_put_to_tab(tab, stacks->a, i);
	ft_sort_int_tab(tab, ft_lstlen_a(stacks->a) - 1);
	while (ptr)
	{
		if (tab[i] == ptr->data)
		{
			ptr->index = i + 1;
			ptr = ptr->next;
			i = 0;
		}
		else
			i++;
	}
	free(tab);
}

void	ft_put_to_tab(int *tab, t_list_a *stack, int index)
{
	t_list_a	*tmp;

	tmp = stack;
	while (tmp)
	{
		tab[index] = tmp->data;
		index++;
		tmp = tmp->next;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		c;
	int		i;
	int		tmp;

	c = 0;
	i = 0;
	while (c < size)
	{
		while (i < size)
		{
			if (tab[i] >= tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		i = 0;
		c++;
	}
}
