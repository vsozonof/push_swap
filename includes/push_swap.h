/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:05:51 by vsozonof          #+#    #+#             */
/*   Updated: 2023/05/08 20:14:40 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/includes/libft.h"

//------------------------------------------------------------------------------
//							--- Linked List Declaration ---
//------------------------------------------------------------------------------

typedef struct s_list_a
{
	int				data;
	struct s_list_a	*next;
}	t_list_a;

typedef struct s_list_b
{
	int				data;
	struct s_list_b	*next;
}	t_list_b;

typedef struct s_lists
{
	struct s_list_a	*a;
	struct s_list_b	*b;
}	t_list;

//------------------------------------------------------------------------------
//							--- Arguments Verifications ---
//------------------------------------------------------------------------------

//					  --- General Args Verification Functions ---
//------------------------------------------------------------------------------

int			args_handler(int n, char *args[], t_list *stacks);
int			multi_args_handler(char **stash, t_list *stacks);
int			single_args_handler(char *str, t_list *stacks);

// 							--- Single Arg Verification ---
//------------------------------------------------------------------------------

int			head_and_end_checker(char *str);
int			s_str_checker(char *str);
int			is_digit_minus_wspace(char c);
int			s_charset_checker(char *str);
int			is_wspace_null(char c);
int			s_digits_dupes_checker(char **stash);
int			s_overflow_checker(char **stash);
int			s_duplicate_checker(char **stash);

//							--- Multi Args Verification ---
//------------------------------------------------------------------------------

int			m_str_checker(char **stash);
int			m_digits_dupes_checker(char **stash);
int			m_overflow_checker(char **stash);
int			m_duplicate_checker(char **stash);
int			m_put_to_lst(char **stash, t_list *stacks);

//------------------------------------------------------------------------------
//								--- Sorting Algorithms  ---
//------------------------------------------------------------------------------

void		algo_handler(t_list *stacks);

//------------------------------------------------------------------------------
//								--- Linked List  ---
//------------------------------------------------------------------------------

//							--- Linked List Manipulation ---
//------------------------------------------------------------------------------

void		init_stacks(t_list *stacks);
int			s_put_to_lst(char **stash, t_list *stacks);
void		ft_set_at_a(t_list_a *L, int data, int pos);
void		ft_set_at_b(t_list_b *L, int data, int pos);
void		ft_printlst_a(t_list_a *L);
void		ft_printlst_b(t_list_b *L);
long		ft_lstlen_a(t_list_a *L);
long		ft_lstlen_b(t_list_b *L);
int			ft_get_at_a(t_list_a *L, int pos);
int			ft_get_at_b(t_list_b *L, int pos);
t_list_a	*ft_freelist_a(t_list_a *L);
t_list_b	*ft_freelist_b(t_list_b *L);
t_list_a	*ft_free_at_a(t_list_a *L, int pos);
t_list_b	*ft_free_at_b(t_list_b *L, int pos);
t_list_a	*ft_create_cell_a(int data);
t_list_b	*ft_create_cell_b(int data);
t_list_a	*ft_add_at_a(t_list_a *L, int data, int pos);
t_list_b	*ft_add_at_b(t_list_b *L, int data, int pos);

//							--- Push Swap Actions ---
//------------------------------------------------------------------------------

void		sa(t_list *stacks);
void		sb(t_list *stacks);

#endif