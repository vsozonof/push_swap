/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:31:39 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/11 07:09:12 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit_minus_wspace(char c)
{
	if (ft_isdigit(c) || ft_is_whitespace(c) || ft_isminus(c))
		return (1);
	else
		return (0);
}

int	head_and_end_checker(char *str)
{
	if (!ft_isdigit(str[0]) && !ft_isminus(str[0]))
		return (0);
	else if (!ft_isdigit(str[ft_strlen(str) - 1]))
		return (0);
	else
		return (1);
}
