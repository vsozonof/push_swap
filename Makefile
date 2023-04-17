# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 08:53:01 by vsozonof          #+#    #+#              #
#    Updated: 2023/04/17 12:44:16 by vsozonof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes
RM = rm -f

COLOUR_GREEN =\033[0;32m
COLOUR_END =\033[0m

SRCS = srcs/main.c \
	   srcs/parsing/args_handler.c \
	   srcs/parsing/multi_args_handler.c \
	   srcs/parsing/single_args_handler.c \
	   srcs/parsing/single_args_utils/s_checker_utils.c \
	   srcs/parsing/single_args_utils/s_str_checker.c \
	   srcs/parsing/single_args_utils/s_charset_checker.c \
	   srcs/parsing/single_args_utils/s_digits_checker.c \
	   srcs/parsing/single_args_utils/s_duplicate_checker.c \
	   srcs/parsing/multi_args_utils/m_str_checker.c \
	   srcs/parsing/multi_args_utils/m_digits_checker.c \
	   srcs/lists/ft_add_at.c \
	   srcs/lists/ft_create_cell.c \
	   srcs/lists/ft_get_at.c \
	   srcs/lists/ft_free_at.c \
	   srcs/lists/ft_free_list.c \
	   srcs/lists/ft_list_len.c \
	   srcs/lists/ft_print_list.c \

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