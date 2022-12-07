# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmora-es <rmora-es@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 21:03:25 by rmora-es          #+#    #+#              #
#    Updated: 2022/12/06 23:25:48 by rmora-es         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

.SILENT:

SRC :=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_tolower.c ft_toupper.c \
	ft_bzero.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_atoi.c ft_calloc.c \
	ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c

OBJS = $(SRC:%.c=%.o)

FLAGS = -Wall -Werror -Wextra
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	echo "Library compiled"

clean:
	rm -f $(OBJS)
	echo ".o files removed"

fclean: clean
	rm -f $(NAME)
	echo "Library removed"

re: fclean $(NAME)

.PHONY: all clean fclean re