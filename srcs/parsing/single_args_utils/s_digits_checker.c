/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_digits_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:55:19 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/14 10:04:36 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	s_digits_dupes_checker(char **stash)
{
	if (!s_overflow_checker(stash))
	{
		ft_split_free(stash);
		return (0);
	}
	else if (!s_duplicate_checker(stash))
	{
		ft_split_free(stash);
		return (0);
	}
	return (1);
}

int	s_overflow_checker(char **stash)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (stash[i])
	{
		if (!ft_int_overflow_checker(stash[i]))
			return (0);
		else
			i++;
	}
	return (1);
}
