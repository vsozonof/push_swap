/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:05:51 by vsozonof          #+#    #+#             */
/*   Updated: 2023/09/05 14:27:38 by vsozonof         ###   ########.fr       */
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
int			actions_calculator(int lowest, int sec_lowest);
int			five_digits_actions(int index);
int			four_digits_calculator(int index, int old_index);
int			four_digits_a(int index, int old_index);
int			four_digits_b(int index, int old_index);

void		basic_algo(t_list *stacks);
void		double_digit_sorter(t_list *stacks);
void		triple_digit_handler(t_list *stacks);
void		triple_digit_sorter(t_list *stacks, int n1, int n2, int n3);

void		medium_algo(t_list *stacks);
void		ft_medium_reversed_sort(t_list *stacks);

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
int			ft_is_sorted(t_list *stacks);
int			ft_is_reversed(t_list *stacks);
int			ft_find_lowest(t_list *stacks);
int			ft_find_second_lowest(t_list *stacks);
int			ft_find_biggest(t_list *stacks);

//							--- Push Swap Actions ---
//------------------------------------------------------------------------------

void		sa(t_list *stacks, int id);
void		sb(t_list *stacks, int id);
void		ss(t_list *stacks);
void		pa(t_list *stacks);
void		pb(t_list *stacks);
void		ra(t_list *stacks, int id);
void		rb(t_list *stacks, int id);
void		rr(t_list *stacks);
void		rra(t_list *stacks, int id);
void		rrb(t_list *stacks, int id);
void		rrr(t_list *stacks);

#endif