/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 05:10:12 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/11 03:04:08 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	str_checker(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isminus(str[i]))
			i++;
		while (ft_isdigit(str[i]))
			i++;
		if (ft_is_whitespace(str[i]))
			i++;
	}
	return (1);
}
