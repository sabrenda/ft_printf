# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 17:52:50 by sabrenda          #+#    #+#              #
#    Updated: 2021/01/20 03:39:12 by sabrenda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c\
		ft_work_printf.c\
		ft_parser.c\
		ft_type.c\
		ft_build_c.c\
		ft_build_s.c\
		ft_build_spec.c\
		ft_build_u.c\
		ft_build_i.c\
		ft_build_p.c\
		ft_build_x.c\
		ft_width_flag_work.c\
		ft_width_flag_work_s.c\
		ft_width_flag_work_i.c\
		ft_putlstr.c\
		ft_strchr.c\
		ft_atoi.c\
		ft_isdigit.c\
		ft_putin.c\
		ft_putnbru.c\
		ft_plus_add.c\
		ft_zero_and_x.c\
		ft_zero_and_xx.c\
		ft_dot_add_i.c\
		ft_dot_add_u.c\
		ft_dot_add_x.c\
		ft_dot.c\
		ft_dot_add_two.c\
		ft_dot_add_twou.c\
		ft_dot_add_xtwo.c\
		ft_init_flags.c\
		ft_init_type.c\
		ft_parser_flags.c\
		ft_minus.c\
		ft_plus.c\
		ft_space.c\
		ft_octothorpe.c\
		ft_zero.c\
		ft_width.c\
		ft_toupper.c\
		ft_llhh.c\
		ft_hl_i.c\
		ft_hl_u.c\
		ft_putlstrx.c\
		ft_hl_x.c\
		ft_bzero.c\
		ft_flag_work_i.c\
		ft_strdup.c\
		ft_hexadecimal.c\
		ft_hexadecimal_p.c\
		ft_goto_hexadecimal.c\
		ft_strlen.c\
		ft_leni.c\
		ft_lenu.c\
		ft_slen.c

OBJ = $(SRC:.c=.o)

HEADERS = ./ft_printf.h

FLAGS = -Wall -Wextra -Werror -c

%.o: %.c $(HEADERS)
	gcc $(FLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?
	ranlib $(NAME)

bonus: all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re bonus
