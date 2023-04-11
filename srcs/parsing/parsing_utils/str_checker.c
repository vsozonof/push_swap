/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 05:10:12 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/11 09:26:37 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	str_checker(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isminus(str[i]) && !(ft_isdigit(str[i + 1])))
		{
			ft_error_writer("Invalid character after a minus sign detected.");
			return (0);
		}
		else
			i++;
		while (ft_isdigit(str[i]))
			i++;
		if (ft_is_whitespace(str[i]) && (!ft_isminus(str[i + 1]) || ft_isdigit(str[i + 1])))
			ft_printf("%c - %i\n", str[i], str[i]);
	}
	return (1);
}

int	minus_digit_checker(char *str, int index)
{
	if (!(ft_isdigit(str[index + 1])))
		return (1);
	else
		return (0);
}
