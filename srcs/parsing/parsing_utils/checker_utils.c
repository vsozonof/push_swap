/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:31:39 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/11 02:51:42 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit_minus(char c)
{
	if (!ft_isdigit(c) && !ft_isminus(c))
	{
		ft_error_writer("Invalid character detected.");
		ft_printf("%c\n", c);
		return (0);
	}
	else
		return (1);
}

int	is_digit_null_minus(char c)
{
	if (ft_isdigit(c) || c == 0 || ft_isminus(c))
		return (1);
	else
		return (0);
}

int	is_wspace_null(char c)
{
	if (ft_is_whitespace(c) || c == 0)
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
