# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 21:19:51 by vsozonof          #+#    #+#              #
#    Updated: 2023/04/14 04:59:29 by vsozonof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes
AR = ar crs
RM = rm -f

COLOUR_GREEN=\033[0;32m
COLOUR_END=\033[0m

SRCS = 	srcs/ft_isalpha.c\
		srcs/ft_isdigit.c\
		srcs/ft_isalnum.c\
		srcs/ft_isascii.c\
		srcs/ft_isprint.c\
		srcs/ft_toupper.c\
		srcs/ft_tolower.c\
		srcs/ft_strchr.c\
		srcs/ft_strrchr.c\
		srcs/ft_strnstr.c\
		srcs/ft_strncmp.c\
		srcs/ft_strlen.c\
		srcs/ft_strlcpy.c\
		srcs/ft_strlcat.c\
		srcs/ft_strdup.c\
		srcs/ft_memcpy.c\
		srcs/ft_memset.c\
		srcs/ft_memmove.c\
		srcs/ft_memchr.c\
		srcs/ft_memcmp.c\
		srcs/ft_bzero.c\
		srcs/ft_atoi.c\
		srcs/ft_calloc.c\
		srcs/ft_itoa.c\
		srcs/ft_putchar_fd.c\
		srcs/ft_putnbr_fd.c\
		srcs/ft_putstr_fd.c\
		srcs/ft_putendl_fd.c\
		srcs/ft_striteri.c\
		srcs/ft_strmapi.c\
		srcs/ft_substr.c\
		srcs/ft_strjoin.c\
		srcs/ft_strtrim.c\
		srcs/ft_split.c\
		srcs/ft_lstnew.c\
		srcs/ft_lstsize.c\
		srcs/ft_lstlast.c\
		srcs/ft_lstadd_front.c\
		srcs/ft_lstadd_back.c\
		srcs/ft_lstdelone.c\
		srcs/ft_lstiter.c\
		srcs/ft_lstclear.c\
		srcs/ft_lstmap.c\
		srcs/ft_putstr.c \
		srcs/ft_putnbr.c \
		srcs/ft_putnbr_hexa.c \
		srcs/ft_strlen.c \
		srcs/ft_pointer_handler.c \
		srcs/ft_printf.c \
		srcs/gnl.c \
		srcs/gnl_utils.c \
		srcs/ft_atol.c \
		srcs/ft_error_writer.c \
		srcs/ft_int_overflow_checker.c \
		srcs/ft_is_str_digit.c \
		srcs/ft_is_whitespace.c \
		srcs/ft_isminus.c \
		srcs/ft_split_free.c \

		
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS) $(HEADER)
		@echo "$(COLOUR_GREEN)******        CREATING LIBRARY        ******$(COLOUR_END)"
		$(AR) $@ $^
		@echo "$(COLOUR_GREEN)******        LIBRARY CREATED         ******$(COLOUR_END)"

all: $(NAME)
     
clean:
		$(RM) $(OBJS) 

fclean: 
		$(RM) $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
