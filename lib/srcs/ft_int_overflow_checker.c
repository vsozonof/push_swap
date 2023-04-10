/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_overflow_checker.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 07:44:02 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/07 01:03:17 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_overflow_checker(char *str)
{
	if (ft_strlen(str) > 10)
		return (0);
	else if (ft_strlen(str) == 10 && ft_integer_checker(str) != 1)
		return (0);
	return (1);
}

int	ft_integer_checker(char *str)
{
	long	n;

	n = ft_atol(str);
	if (n > INT_MAX)
		return (0);
	return (1);
}
