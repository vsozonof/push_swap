/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit_minus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:31:39 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/07 00:49:11 by vsozonof         ###   ########.fr       */
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