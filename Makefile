# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mhaan <mhaan@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/06 15:58:09 by mhaan         #+#    #+#                  #
#    Updated: 2022/10/06 16:21:00 by mhaan         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME: libft.a

SRC = ft_*.c

CC: gcc

all: $(NAME)

CFLAGS = -Wall -Wextra -Werror 

$(NAME):
	gcc $(CFLAGS) -o $(NAME) 

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all