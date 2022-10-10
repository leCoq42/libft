# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mhaan <mhaan@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/06 15:58:09 by mhaan         #+#    #+#                  #
#    Updated: 2022/10/10 14:55:02 by mhaan         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c
OBJ = *.o
DEPS = *.h

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