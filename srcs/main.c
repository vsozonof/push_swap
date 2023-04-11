/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:05:15 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/11 07:14:46 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc == 1)
		ft_error_writer("Not enough arguments.");
	if (!args_handler(argc, argv))
		return (0);
	ft_printf("Arg OK\n");
}
