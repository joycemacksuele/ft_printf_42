# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/30 18:23:22 by jfreitas          #+#    #+#              #
#    Updated: 2020/02/22 12:16:55 by jfreitas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#NORMINETTE *********************#
NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRC = call_analyzer_functions.c \
	  flags.c \
	  ft_length_and_itoa.c \
	  ft_printf.c \
	  initiate_flags_precisions_specifiers.c \
	  initiate_vars.c \
	  libft_functions_1.c \
	  libft_functions_2.c \
	  libft_functions_3.c \
	  min_field_width.c \
	  precision_period.c \
	  putstr_format.c \
	  scan_format.c \
	  space_or_zero.c \
	  specifier_c.c \
	  specifier_d_i.c \
	  specifier_p.c \
	  specifier_other.c \
	  specifier_s.c \
	  specifier_u.c \
	  specifier_x.c \
	  specifiers.c \

OBJ = $(subst .c,.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)
	@/bin/rm -f a.out

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
