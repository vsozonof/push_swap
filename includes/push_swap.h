/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:05:51 by vsozonof          #+#    #+#             */
/*   Updated: 2023/10/03 02:57:31 by vsozonof         ###   ########.fr       */
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
	int					data;
	int					index;
	int					pos;
	struct s_list_a		*next;
	struct s_list_a		*prev;
}	t_list_a;

typedef struct s_list_b
{
	int					data;
	int					index;
	struct s_list_b		*next;
	struct s_list_b		*prev;
}	t_list_b;

typedef struct s_list_tmp
{
	int					data;
	int					index;
	struct s_list_tmp	*next;
}	t_list_tmp;

typedef struct s_lists
{
	struct s_list_a		*a;
	struct s_list_b		*b;
	struct s_list_tmp	*tmp;
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
int			actions_calculator(t_list *stacks);
int			five_digits_actions(int index);
int			four_digits_calculator(int index, int old_index);
int			four_digits_a(int index, int old_index);
int			four_digits_b(int index, int old_index);
int			ft_find_sorted_sequence(t_list *stacks);
int			ft_digits_sequence_detector(t_list *stacks, int seqlen, int mode);
int			first_move_handler(t_list *stacks);

void		basic_algo(t_list *stacks);
void		double_digit_sorter(t_list *stacks);
void		triple_digit_handler(t_list *stacks, int mode);
void		triple_digit_sorter(t_list *stacks, int n1, int n2, int n3);
void		triple_digit_sorter_spe(t_list *stacks, int n1, int n2, int n3);
void		triple_digit_handler_b(t_list *stacks, int mode);
void		triple_digit_sorter_b(t_list *stacks, int n1, int n2, int n3);
void		triple_digit_sorter_b_spe(t_list *stacks, int n1, int n2, int n3);

void		medium_algo(t_list *stacks);
void		ft_medium_reversed_sort(t_list *stacks);
void		medium_first_digit_mover(t_list *stacks, int mode);
void		first_move_to_b_one(t_list *stacks, int pos);
void		first_move_to_b_two(t_list *stacks, int pos);
void		medium_second_digit_mover(t_list *stacks, int mode);
void		medium_move_back_to_b(t_list *stacks);
void		medium_sequenced_sorter(t_list *stacks);
void		medium_three_digits_sequence(t_list *stacks);
void		medium_four_digits_sequence(t_list *stacks);
void		ft_lowest_sequence_handler(t_list *stacks);
void		ft_lowest_seq_sorter_a(t_list *stacks);
void		ft_lowest_seq_sorter_b(t_list *stacks);
void		ft_lowest_seq_sorter_c(t_list *stacks);
void		ft_sec_lowest_sequence_handler(t_list *stacks);
void		ft_sec_lowest_seq_sorter_a(t_list *stacks);
void		ft_sec_lowest_seq_sorter_b(t_list *stacks);
void		ft_sec_lowest_seq_sorter_c(t_list *stacks);
void		ft_thrd_lowest_sequence_handler(t_list *stacks);
void		ft_thrd_lowest_seq_sorter_a(t_list *stacks);
void		ft_thrd_lowest_seq_sorter_b(t_list *stacks);
void		ft_thrd_lowest_seq_sorter_c(t_list *stacks);

void		hard_algo(t_list *stacks);
void		chunk_move_to_b_100(t_list *stacks);
void		chunk_move_to_a_100(t_list *stacks);
void		chunk_mover_b_100(t_list *stacks, int i_max, int n);
void		chunk_sorter_100(t_list *stacks);
void		chunk_digit_mover_to_b_100(t_list *stacks, int i_max);
void		top_or_bot_moving_100(t_list *stacks, int mode, int n, int i_max);
int			move_optimizer_100(t_list *stacks, int mode, int n);
int			top_to_bot_scanner_a(t_list *stacks, int i_max);
int			bot_to_top_scanner_a(t_list *stacks, int i_max);
int			top_to_bot_scanner_b(t_list *stacks, int i_max);
int			bot_to_top_scanner_b(t_list *stacks, int i_max);
int			do_ra_or_rr(t_list *stacks, int mode);

void		chunk_digit_mover(t_list *stacks, int i_max, int n);
void		pair_digit_system_handler(t_list *stacks, int i_max);
void		pair_digit_system_mover(t_list *stacks, int *tab, int i_max);
void		n_actions_calculator(t_list *stacks, int *tab, int i_max, int mode);
void		digit_mover_100(t_list *stacks, int mode, int n, int i_max);
void		update_actions_cost(t_list *stacks, int i_max, int *tab, int mode);
void		digit_actions_calculator_a(int *tab, int n1, int n2);
void		digit_actions_calculator_b(int *tab, int n1, int n2);


//------------------------------------------------------------------------------
//								--- Linked List  ---
//------------------------------------------------------------------------------

//							--- Linked List Manipulation ---
//------------------------------------------------------------------------------

void		init_stacks(t_list *stacks);
int			s_put_to_lst(char **stash, t_list *stacks);
void		ft_set_at_a(t_list_a *L, int data, int pos);
void		ft_set_at_b(t_list_b *L, int data, int pos);
void		ft_set_at_tmp(t_list_tmp *L, int data, int pos);
void		ft_printlst_a(t_list_a *L);
void		ft_printlst_b(t_list_b *L);
void		ft_printlst_tmp(t_list_tmp *L);
long		ft_lstlen_a(t_list_a *L);
long		ft_lstlen_b(t_list_b *L);
int			ft_get_at_a(t_list_a *L, int pos);
int			ft_get_at_b(t_list_b *L, int pos);
t_list_a	*ft_freelist_a(t_list_a *L);
t_list_b	*ft_freelist_b(t_list_b *L);
t_list_tmp	*ft_freelist_tmp(t_list_tmp *L);
t_list_a	*ft_free_at_a(t_list_a *L, int pos);
t_list_b	*ft_free_at_b(t_list_b *L, int pos);
t_list_a	*ft_create_cell_a(int data);
t_list_b	*ft_create_cell_b(int data);
t_list_tmp	*ft_create_cell_tmp(int data);
t_list_a	*ft_add_at_a(t_list_a *L, int data, int pos);
t_list_b	*ft_add_at_b(t_list_b *L, int data, int pos);
t_list_tmp	*ft_add_at_tmp(t_list_tmp *L, int data, int pos);
int			ft_is_sorted(t_list *stacks);
int			ft_is_reversed(t_list *stacks);
int			ft_find_lowest(t_list *stacks);
int			ft_find_second_lowest(t_list *stacks);
int			ft_find_biggest(t_list *stacks);
void		ft_tmp_formater(t_list *stacks);
void		ft_put_to_tab(int *tab, t_list_a *stack, int index);
void		ft_sort_int_tab(int *tab, int size);
void		pos_setter(t_list *stacks);
void		ft_add_prev_ptr_a(t_list *stacks);
void		ft_add_prev_ptr_b(t_list *stacks);

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