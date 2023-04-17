/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_args_handler.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:30:09 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/17 06:47:20 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	multi_args_handler(char **stash)
{
	int	i;

	i = 1;
	if (!m_str_checker(stash))
		return (0);
	else if (!m_digits_dupes_checker(stash))
		return (0);
	return (1);
}
