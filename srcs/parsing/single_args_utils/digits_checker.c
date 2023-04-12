/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:55:19 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/12 13:50:05 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	digits_checker(char *str)
{
	char	**digits_stash;

	digits_stash = ft_split(str, ' ');
	if (!overflow_checker(digits_stash))
		return (0);
	return (1);
}

int	overflow_checker(char **stash)
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
