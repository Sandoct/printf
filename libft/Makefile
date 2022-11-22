# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 16:01:39 by gpouzet           #+#    #+#              #
#    Updated: 2022/11/14 20:09:19 by gpouzet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
FLAGS = -Wall -Wextra -Werror 

NAME = libft.a

SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c \
		ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memchr.c ft_memcmp.c ft_memmove.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_strnstr.c ft_calloc.c ft_strdup.c \
		ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_atoi.c ft_atoipiscine.c ft_itoa.c ft_substr.c \
		ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c \

SRCSB =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJ = $(SRCS:.c=.o)

OBJB = $(SRCSB:.c=.o)

ifdef BONUS
	SRCS += $(SRCSB)
endif

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo  "\\r\033[1;32m[libft compilation completed]"

bonus: 
	@make BONUS=1 --no-print-directory

%.o: %.c
%.o: %.c
	@echo -n "\\r                                    "
	@echo -n "\\r\033[1;33m[compiling...]"$<
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ) $(OBJB)
	@echo -n "\\r\033[1;32m[object files cleaned]"
	@sleep 0.3

fclean: clean
	@rm -rf $(NAME) 
	@echo -n "\\r                                    "
	@echo -n "\\r\033[1;32m[library cleaned]"
	@sleep 0.5

re: fclean all

.PHONY: all so bonus clean fclean re
