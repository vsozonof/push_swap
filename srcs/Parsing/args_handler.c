/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:03:19 by vsozonof          #+#    #+#             */
/*   Updated: 2023/05/06 16:21:09 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//------------------------------------------------------------------------------
//							🔒- Args Format Identifier -🔒
//------------------------------------------------------------------------------

// This function is used to call 2 other functions depending on
// the format of the arguments given.
//
// The args format are as following :
// 	➡️	"Single" -> "X X X X X X X X"
// 	➡️	"Multi"  -> "X" "X" "X" "X" "X" 

//------------------------------------------------------------------------------

int	args_handler(int n, char *args[], t_list *stacks)
{
	if (n == 2)
		return (single_args_handler(args[1], stacks));
	else
		return (multi_args_handler(args, stacks));
}
