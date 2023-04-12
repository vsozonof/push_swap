/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:55:19 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/12 12:06:59 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	digits_checker(char *str)
{
	char	**digits_stash;

	digits_stash = ft_split(str, ' ');
	if (!overflow_checker)
		return (pr_error("An integer overflow has been detected."));
	return (1);
}

int	overflow_checker(char **stash)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
}
