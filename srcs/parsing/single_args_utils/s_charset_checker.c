/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_charset_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 07:03:48 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/14 10:37:35 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	s_charset_checker(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_digit_minus_wspace(str[i]))
			return (pr_error("An invalid character was detected."));
		i++;
	}
	return (1);
}
