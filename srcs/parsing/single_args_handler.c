/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_args_handler.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:30:06 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/12 10:08:58 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//								--- Single Args Format ---
//------------------------------------------------------------------------------

// This function will execute multiple function calls that will check if the
// arguments we received are valid or not.

// Args requirements :
// - Starts and ends with a digit or a minus sign.
// - Digits musn't be greater or smaller than INT_MIN and INT_MAX
// - Every numbers must be separated with one whitespace.
// - Numbers only.

//------------------------------------------------------------------------------

int	single_args_handler(char *str)
{
	if (!charset_checker(str))
		return (0);
	else if (!head_and_end_checker(str))
		return (pr_error("Argument starts or ends with an invalid character."));
	else if (!str_checker(str))
		return (0);
	else if (!digits_checker(str))
		return (0);
	return (1);
}
