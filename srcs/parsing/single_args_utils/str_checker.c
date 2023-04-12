/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 05:10:12 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/12 09:39:08 by vsozonof         ###   ########.fr       */
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
			return (pr_error("Invalid character after a sign detected."));
		else
			i++;
		while (ft_isdigit(str[i]))
			i++;
		if (ft_isdigit(str[i - 1]) && !is_wspace_null(str[i]))
			return (pr_error("Invalid character after a number detected."));
		if (ft_is_whitespace(str[i])
			&& (!ft_isminus(str[i + 1]) && !ft_isdigit(str[i + 1])))
			return (pr_error("Invalid character after a whitespace detected."));
	}
	return (1);
}
