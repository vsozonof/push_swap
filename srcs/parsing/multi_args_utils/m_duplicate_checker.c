/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_duplicate_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:12:24 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/20 13:14:07 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	m_duplicate_checker(char **stash)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (stash[i])
	{
		while (stash[j])
		{
			if (ft_atoi(stash[i]) == ft_atoi(stash[j]) && (j != i))
				return (pr_error("A duplicate has been detected."));
			j++;
		}
		j = 1;
		i++;
	}
	return (1);
}