/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:05:51 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/17 06:53:05 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/includes/libft.h"

//------------------------------------------------------------------------------
//							--- Arguments Verifications ---
//------------------------------------------------------------------------------

//					  --- General Args Verification Functions ---
//------------------------------------------------------------------------------

int	args_handler(int n, char *args[]);
int	multi_args_handler(char **stash);
int	single_args_handler(char *str);

// 							--- Single Arg Verification ---
//------------------------------------------------------------------------------

int	head_and_end_checker(char *str);
int	s_str_checker(char *str);
int	is_digit_minus_wspace(char c);
int	s_charset_checker(char *str);
int	is_wspace_null(char c);
int	s_digits_dupes_checker(char **stash);
int	s_overflow_checker(char **stash);
int	s_duplicate_checker(char **stash);

//							--- Multi Args Verification ---
//------------------------------------------------------------------------------

int	m_str_checker(char **stash);
int	m_digits_dupes_checker(char **stash);
int	m_overflow_checker(char **stash);


#endif