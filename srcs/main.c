/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:05:15 by vsozonof          #+#    #+#             */
/*   Updated: 2023/05/02 13:58:59 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	stacks;

	stacks.a = NULL;
	stacks.b = NULL;
	if (argc == 1)
		pr_error("Not enough arguments.");
	if (!args_handler(argc, argv, &stacks))
		return (0);
	ft_printf("STACK A =\n");
	ft_printlst_a(stacks.a);
	ft_freelist_a(stacks.a);
}
