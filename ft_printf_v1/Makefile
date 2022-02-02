# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/25 10:56:42 by pyago-ra          #+#    #+#              #
#    Updated: 2021/08/28 13:01:09 by pyago-ra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
 
SOURCES	=	ft_printf.c \
./utils/ft_bzero.c ./utils/ft_calloc.c ./utils/ft_isdigit.c ./utils/ft_itoa.c ./utils/ft_memset.c ./utils/ft_putchar_fd.c ./utils/ft_putstr_fd.c ./utils/ft_strlen.c \
./controller/controller.c ./controller/flag.c  ./controller/format.c \
./controller/formats/add_digit.c ./controller/formats/number_to_hex.c ./controller/formats/print_caractere.c \
./controller/formats/print_number.c ./controller/formats/print_p_hexadecimal.c ./controller/formats/print_string.c \
./controller/formats/print_unsigned_number.c ./controller/formats/print_upper_hexadecimal.c ./controller/formats/print_x_hexadecimal.c

OBJS	=	${SOURCES:.c=.o}

OBJS_B	=	$(SOURCES:.c=.o)

all:	$(NAME)

$(NAME):	${OBJS}
		@ar -rcs $(NAME) ${OBJS}
		@ranlib $(NAME)

.c.o:
		@gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o} -I./

clean:
		@rm -f ${OBJS} $(OBJS_B)

fclean:	clean
		@rm -f $(NAME)

re:	fclean all

bonus:	$(NAME) $(OBJS_B)
		@ar -rcs $(NAME) $(OBJS_B)