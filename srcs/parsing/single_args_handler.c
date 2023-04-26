/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_args_handler.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:30:06 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/26 15:47:14 by vsozonof         ###   ########.fr       */
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
// - Numbers / Whitespace / Minus sign only.

//------------------------------------------------------------------------------

int	single_args_handler(char *str, t_list *stacks)
{
	char	**stash;

	stash = ft_split(str, ' ');
	if (!s_charset_checker(str))
		return (ft_split_free(stash));
	else if (!head_and_end_checker(str))
		return (ft_split_free(stash));
	else if (!s_str_checker(str))
		return (ft_split_free(stash));
	else if (!s_digits_dupes_checker(stash))
		return (0);
	else if (!s_put_to_lst(stash, stacks))
		return (0);
	ft_split_free(stash);
	return (1);
}
