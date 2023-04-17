/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_overflow_checker.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 07:44:02 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/12 13:51:43 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_overflow_checker(char *str)
{
	if (ft_strlen(str) > 11)
		return (pr_error("Integer overflow/underflow detected."));
	else if (ft_integer_checker(str) != 1)
		return (0);
	return (1);
}

int	ft_integer_checker(char *str)
{
	long	n;

	n = ft_atol(str);
	if (n > INT_MAX)
		return (pr_error("Integer overflow detected."));
	else if (n < INT_MIN)
		return (pr_error("Integer underflow detected."));
	return (1);
}
