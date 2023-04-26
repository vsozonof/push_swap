/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:05:15 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/26 17:55:54 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stacks;

	stacks->a = ft_create_cell_a(NULL);
	stacks->b = ft_create_cell_b(NULL);
	if (argc == 1)
		pr_error("Not enough arguments.");
	if (!args_handler(argc, argv, stacks))
		return (0);
	ft_printf("Arg OK\n");
}
