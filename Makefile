# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mhaan <mhaan@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/06 15:58:09 by mhaan         #+#    #+#                  #
<<<<<<< HEAD
#    Updated: 2023/03/06 12:08:08 by mhaan         ########   odam.nl          #
=======
#    Updated: 2023/03/09 15:23:10 by mhaan         ########   odam.nl          #
>>>>>>> e27a7b8990ece7c4b79bff56e6dd789a9c1ad943
#                                                                              #
# **************************************************************************** #

NAME = libft.a

<<<<<<< HEAD
CC = gcc
ARFLAGS = -crs
CFLAGS = -Wall -Wextra -Werror

SRC = 		ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
=======
SRC_DIR :=	./src
SRC		:=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
>>>>>>> e27a7b8990ece7c4b79bff56e6dd789a9c1ad943
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
			ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJ_DIR :=	./obj
OBS		:=	$(SRC:.c=.o)
OBJS :=		$(addprefix $(OBJ_DIR)/,$(notdir $(SRC:.c=.o)))

BONUS_SRC := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BOBS = 		$(BONUS:.c=.o)
B_OBJS :=		$(addprefix $(OBJ_DIR)/,$(notdir $(BONUS_SRC:.c=.o)))

<<<<<<< HEAD
all: $(NAME)

=======
CC = gcc
ARFLAGS = -crs
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
		ar $(ARFLAGS) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: %.c
		@mkdir -p $(OBJ_DIR)
		$(CC) -c $(CFLAGS) $^ -o $@

all: $(NAME)

bonus: $(OBJS) $(B_OBJS)
		ar $(ARFLAGS) $(NAME) $(OBJS) $(B_OBJS)

>>>>>>> e27a7b8990ece7c4b79bff56e6dd789a9c1ad943
clean:
		/bin/rm -rf $(OBJ_DIR)

fclean: clean
		/bin/rm -f $(NAME)

bonus: $(OBS) $(BOBS)
		ar $(ARFLAGS) $(NAME) $(OBS) $(BOBS)

re:
		$(MAKE) fclean
		$(MAKE) all

$(NAME): $(OBS)
		ar $(ARFLAGS) $(NAME) $(OBS)

%.o: %.c
		$(CC) -c $(CFLAGS) $^ -o $@

.PHONY:
		all bonus clean fclean re