/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:05:15 by vsozonof          #+#    #+#             */
/*   Updated: 2023/08/08 00:27:56 by vsozonof         ###   ########.fr       */
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
	ft_printlst_a(stacks.a);
}
