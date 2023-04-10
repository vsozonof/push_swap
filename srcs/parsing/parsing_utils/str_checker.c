/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 05:10:12 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/07 01:06:39 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	str_checker(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_printf("%c", str[i]);
		if (ft_isminus(str[i]))
			i++;
		while (ft_isdigit(str[i]))
			i++;
		if (ft_is_whitespace(str[i]) && is_digit_null_minus(str[i + 1]))
			i++;
		else
		{
			ft_error_writer("Double whitespace detected.");
			return (0);
		}
	}
	return (1);
}
