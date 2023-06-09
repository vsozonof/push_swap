/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_charset_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 07:03:48 by vsozonof          #+#    #+#             */
/*   Updated: 2023/05/06 17:02:44 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//							--- Charset Checker ---
//------------------------------------------------------------------------------

// This function will go through the string passed as arguments
// and detect invalid characters.

//------------------------------------------------------------------------------

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
