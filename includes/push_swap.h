/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:05:51 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/12 13:37:49 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/includes/libft.h"

//------------------------------------------------------------------------------
//							--- Arguments Verifications ---
//------------------------------------------------------------------------------

int	args_handler(int n, char *args[]);
int	multi_args_handler(char *argv[]);
int	single_args_handler(char *str);
int	head_and_end_checker(char *str);
int	str_checker(char *str);
int	is_digit_minus_wspace(char c);
int	charset_checker(char *str);
int	is_wspace_null(char c);
int	digits_checker(char *str);
int	overflow_checker(char **stash);

#endif