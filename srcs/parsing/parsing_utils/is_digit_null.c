/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:16:26 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/06 20:57:09 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit_null_minus(char c)
{
	if (ft_isdigit(c) || c == 0 || ft_isminus(c))
		return (1);
	else
		return (0);
}