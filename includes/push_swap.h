/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:05:51 by vsozonof          #+#    #+#             */
/*   Updated: 2023/04/17 12:51:19 by vsozonof         ###   ########.fr       */
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

//------------------------------------------------------------------------------
//							--- Linked List Manipulation ---
//------------------------------------------------------------------------------

// typedef struct s_list
// {
// 	int				data;
// 	struct s_list	*next;
// }	t_list;

// t_list	*emptylist(void);
// int		isemptylist(t_list *L);
// long	lenlist(t_list *L);
// t_list	*addat(t_list *L, int n1, int n2);
// int		getat(t_list *L, int n);
// void	setat(t_list *L, int n1, int n2);
// t_list	*freeat(t_list *L, int n);
// t_list	*freelist(t_list *L);
// void	printlist(t_list *L);

#endif