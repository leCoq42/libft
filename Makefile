# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mhaan <mhaan@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/06 15:58:09 by mhaan         #+#    #+#                  #
#    Updated: 2023/03/15 11:21:08 by mhaan         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

ARFLAGS = -crs
CFLAGS = -Wall -Wextra -Werror

SRC_DIR :=	./src
SRC		:=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
			ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_SRC := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

O_DIR :=	./obj
OBJS :=		$(addprefix $(O_DIR)/,$(notdir $(SRC:.c=.o)))
B_OBJS :=	$(addprefix $(O_DIR)/,$(notdir $(BONUS_SRC:.c=.o)))

ifdef WITH_BONUS
O_FILES = $(OBJS) $(B_OBJS)
else
O_FILES = $(OBJS)
endif

$(NAME): $(O_FILES)
		ar $(ARFLAGS) $@ $^

$(O_DIR)/%.o: %.c
		@mkdir -p $(O_DIR)
		gcc -c $(CFLAGS) $^ -o $@

all: $(NAME)

bonus:
		@$(MAKE) WITH_BONUS=1 all

clean:
		/bin/rm -rf $(O_DIR)

fclean: clean
		/bin/rm -f $(NAME)

re:
		$(MAKE) fclean
		$(MAKE) all

.PHONY:
		all bonus clean fclean re