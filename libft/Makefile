# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 11:12:17 by ldi-masc          #+#    #+#              #
#    Updated: 2022/11/30 11:17:41 by ldi-masc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c \
	ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
	ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_intlen.c ft_itobase.c ft_itobase_cap.c \
	get_next_line.c get_next_line_utils.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) *.o

bonus:
	$(CC) $(FLAGS) -c $(BONUS)
	ar rc $(NAME) *.o

clean:
	rm -f *.o *.out

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
