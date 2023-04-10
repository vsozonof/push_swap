/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head_end_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 04:52:37 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/05 05:01:04 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	head_and_end_checker(char *str)
{
	if (!ft_isdigit(str[0]) && !ft_isminus(str[0]))
		return (0);
	else if (!ft_isdigit(str[ft_strlen(str) - 1]))
		return (0);
	else
		return (1);
}