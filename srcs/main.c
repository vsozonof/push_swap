/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:05:15 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/27 11:19:16 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	stacks;

	init_stacks(&stacks);
	if (argc == 1)
		return (pr_error("Not enough arguments."));
	else if (!args_handler(argc, argv, &stacks))
		return (0);
	else if (ft_lstlen_a(stacks.a) == 1)
		return (pr_error("Not enough arguments."));
	algo_handler(&stacks);
	// ft_printlst_a(stacks.a);
	// ft_printlst_b(stacks.b);
	// ft_printlst_tmp(stacks.tmp);
	ft_freelist_tmp(stacks.tmp);
	ft_freelist_a(stacks.a);
	ft_freelist_b(stacks.b);
}
