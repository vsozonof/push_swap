# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 08:53:01 by vsozonof          #+#    #+#              #
#    Updated: 2023/04/03 09:08:44 by vsozonof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes
RM = rm -f

COLOUR_GREEN =\033[0;32m
COLOUR_END =\033[0m

SRCS = srcs/main.c \

SRCS_LIBFT = libft/libft.a \

all: init $(NAME)

init:
		@echo "$(COLOUR_GREEN)****** STARTING COMPILATION ******$(COLOUR_END)"
		make all -C ./libft

$(NAME): $(SRCS)
	@echo "$(COLOUR_GREEN)******    CREATING BINARY    ******$(COLOUR_END)"
	$(CC) $(CFLAGS) $(SRCS) $(SRCS_LIBFT) -o $(NAME)

clean:
		@echo "$(COLOUR_GREEN)****** INITIATING CLEAN  ******$(COLOUR_END)"
		make clean -C ./libft
		@echo "$(COLOUR_GREEN)******   CLEAN COMPLETE  ******$(COLOUR_END)"

fclean: 
		@echo "$(COLOUR_GREEN)****** INITIATING FCLEAN ******$(COLOUR_END)"
		make fclean -C ./libft
		$(RM) $(NAME)
		@echo "$(COLOUR_GREEN)******  FCLEAN COMPLETE  ******$(COLOUR_END)"