# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 08:53:01 by vsozonof          #+#    #+#              #
#    Updated: 2023/09/29 19:37:01 by vsozonof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes
RM = rm -f

COLOUR_GREEN =\033[0;32m
COLOUR_END =\033[0m

SRCS = srcs/main.c \
	   srcs/Parsing/args_handler.c \
	   srcs/Parsing/multi_args_handler.c \
	   srcs/Parsing/single_args_handler.c \
	   srcs/Parsing/init_stacks.c \
	   srcs/Parsing/single_args_utils/s_checker_utils.c \
	   srcs/Parsing/single_args_utils/s_str_checker.c \
	   srcs/Parsing/single_args_utils/s_charset_checker.c \
	   srcs/Parsing/single_args_utils/s_digits_checker.c \
	   srcs/Parsing/single_args_utils/s_duplicate_checker.c \
	   srcs/Parsing/single_args_utils/s_put_to_lst.c \
	   srcs/Parsing/multi_args_utils/m_str_checker.c \
	   srcs/Parsing/multi_args_utils/m_digits_checker.c \
	   srcs/Parsing/multi_args_utils/m_duplicate_checker.c \
	   srcs/Parsing/multi_args_utils/m_put_to_lst.c \
	   srcs/Lists/Utils/ft_add_at.c \
	   srcs/Lists/Utils/ft_set_at.c \
	   srcs/Lists/Utils/ft_create_cell.c \
	   srcs/Lists/Utils/ft_get_at.c \
	   srcs/Lists/Utils/ft_free_at.c \
	   srcs/Lists/Utils/ft_free_list.c \
	   srcs/Lists/Utils/ft_lstlen.c \
	   srcs/Lists/Utils/ft_printlist.c \
	   srcs/Lists/Utils/ft_is_sorted.c \
	   srcs/Lists/Utils/ft_is_reversed.c \
	   srcs/Lists/Utils/ft_find_biggest.c \
	   srcs/Lists/Utils/ft_find_lowest.c \
	   srcs/Lists/Utils/ft_find_sec_lowest.c \
	   srcs/Lists/Utils/ft_find_sorted_sequence.c \
	   srcs/Lists/Utils/ft_tmp_indexer.c \
	   srcs/Lists/Utils/ft_pos_setter.c \
	   srcs/Lists/Utils/ft_add_prev_ptr.c \
	   srcs/Lists/Actions/sa.c \
	   srcs/Lists/Actions/sb.c \
	   srcs/Lists/Actions/ss.c \
	   srcs/Lists/Actions/pa.c \
	   srcs/Lists/Actions/pb.c \
	   srcs/Lists/Actions/ra.c \
	   srcs/Lists/Actions/rb.c \
	   srcs/Lists/Actions/rr.c \
	   srcs/Lists/Actions/rra.c \
   	   srcs/Lists/Actions/rrb.c \
	   srcs/Lists/Actions/rrr.c \
	   Algorithms/algo_handler.c \
	   Algorithms/Basic/basic_algo_a.c \
	   Algorithms/Basic/basic_algo_b.c \
	   Algorithms/Medium/medium_algo.c \
	   Algorithms/Medium/medium_reversed.c \
	   Algorithms/Medium/medium_smallest_to_b.c\
	   Algorithms/Medium/medium_sec_smlst_to_b.c \
	   Algorithms/Medium/medium_move_back_to_b.c \
	   Algorithms/Medium/medium_sequenced.c \
	   Algorithms/Medium/medium_actions_calculator.c \
	   Algorithms/Medium/medium_bool.c \
	   Algorithms/Medium/medium_lwst_seq_sorter.c \
	   Algorithms/Medium/medium_sec_lwst_seq_sorter.c \
	   Algorithms/Medium/medium_thrd_lwst_seq_sorter.c \
	   Algorithms/Hard/hard_algo.c \
	   Algorithms/Hard/chunk_mover_to_a_100.c \
	   Algorithms/Hard/chunk_mover_to_b_100.c \
	   Algorithms/Hard/chunk_sorter_100.c \
	   Algorithms/Hard/stack_scanner_100.c \


SRCS_LIBFT = lib/libft.a \

all: init $(NAME)

init:
		@echo "$(COLOUR_GREEN)****** STARTING COMPILATION ******$(COLOUR_END)"
		make all -C ./lib

$(NAME): $(SRCS)
	@echo "$(COLOUR_GREEN)******    CREATING BINARY    ******$(COLOUR_END)"
	$(CC) $(CFLAGS) $(SRCS) $(SRCS_LIBFT) -o $(NAME)

clean:
		@echo "$(COLOUR_GREEN)****** INITIATING CLEAN  ******$(COLOUR_END)"
		make clean -C ./lib
		@echo "$(COLOUR_GREEN)******   CLEAN COMPLETE  ******$(COLOUR_END)"

fclean: 
		@echo "$(COLOUR_GREEN)****** INITIATING FCLEAN ******$(COLOUR_END)"
		make fclean -C ./lib
		$(RM) $(NAME)
		@echo "$(COLOUR_GREEN)******  FCLEAN COMPLETE  ******$(COLOUR_END)"

re: fclean all

.PHONY: all clean fclean init re