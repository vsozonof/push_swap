/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charset_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 07:03:48 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/11 07:23:58 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	charset_checker(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_digit_minus_wspace(str[i]))
		{
			ft_error_writer("An invalid character was detected.\n");
			ft_printf("%i", str[i]);
			return (0);
		}
		i++;
	}
	return (1);
}
