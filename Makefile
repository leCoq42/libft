# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mhaan <mhaan@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/06 15:58:09 by mhaan         #+#    #+#                  #
#    Updated: 2022/10/10 15:07:30 by mhaan         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
DEPS = $(wildcard *.h)

CC = gcc
CFLAGS = -Wall -Wextra -Werror 

all = $(NAME)

$(NAME): $(OBJ)
	ar -cr $@ $^

%.o: %.c $(DEPS)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re: fclean all