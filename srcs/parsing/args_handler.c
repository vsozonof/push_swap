/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:03:19 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/05 03:34:17 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//							--- Args Format Identifyer ---
//------------------------------------------------------------------------------

// This function will is used to call 2 other functions depending on
// the format input.
// "X X X X X" or "X" "X" "X" "X"

//------------------------------------------------------------------------------

int	args_handler(int n, char *args[])
{
	if (n == 2)
		return (single_args_handler(args[1]));
	else
		return (multi_args_handler(args));
}
