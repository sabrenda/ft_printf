# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 17:52:50 by sabrenda          #+#    #+#              #
#    Updated: 2021/01/28 18:13:09 by sabrenda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =		general/ft_printf.c\
			general/ft_work_printf.c general/ft_parser.c general/ft_type.c\
			general/ft_build_c.c general/ft_build_s.c general/ft_build_spec.c\
			general/ft_build_u.c general/ft_build_i.c general/ft_build_p.c\
			general/ft_build_x.c general/ft_flaghi.c general/ft_flaglli.c\
			general/ft_width_flag_work.c general/ft_hl_x.c general/ft_putin.c\
			general/ft_parser_flags.c general/ft_hl_i.c general/ft_hl_u.c\
			general/ft_init_flags.c general/ft_init_type.c general/ft_flaghhi.c\
			general/ft_flag_work_i.c general/ft_goto_hexadecimal.c general/ft_build_n.c\
			flags/ft_dot.c flags/ft_minus.c flags/ft_plus.c flags/ft_space.c\
			flags/ft_octothorpe.c flags/ft_zero.c flags/ft_width.c flags/ft_llhh.c\
			others/ft_strchr.c others/ft_atoi.c others/ft_isdigit.c\
			others/ft_plus_add.c others/ft_zero_and_x.c others/ft_zero_and_xx.c\
			others/ft_toupper.c others/ft_bzero.c others/ft_strdup.c\
			others/ft_strlen.c others/ft_leni.c others/ft_lenu.c others/ft_slen.c

OBJ = $(SRC:.c=.o)

HEADERS = ./ft_printf.h

OPTFLAGS = -O2
FLAGS = -Wall -Wextra -Werror

%.o: %.c $(HEADERS)
	gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@

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

norm:
	norminette general/*.c
	norminette flags/*.c
	norminette others/*.c
	norminette *.h

.PHONY: all bonus clean fclean re bonus norm
