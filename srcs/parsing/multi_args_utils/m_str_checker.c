/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_str_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:56:22 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/14 11:16:22 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	m_str_checker(char **stash)
{
	int	j;
	int	i;

	i = 1;
	j = 0;
	while (stash[i])
	{
		while (stash[i][j])
		{
			if (ft_isminus(stash[i][j]) && !ft_isdigit(stash[i][j + 1]))
				return (pr_error("Invalid character after a sign detected."));
			else
				j++;
			while (ft_isdigit(stash[i][j]))
				j++;
			if (stash[i][j] != '\0')
				return (pr_error("Invalid characters passed as argument."));
		}
		i++;
		j = 0;
	}
	return (1);
}
