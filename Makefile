
CC = gcc

NAME = libft_so_long.a

FLAGS = -Wall -Wextra -Werror

MLX = -Lminilibx -lmlx -framework OpenGL -framework AppKit

SRC = so_long.c load_img.c paintfct.c movements.c errors.c \
	exitgame.c collectexit.c updatemap.c errorsquare.c playermovement.c \
	update.c

LIBFT_PATH = ./libft

MAKE = make

all: $(NAME)

$(NAME): *.c
	$(MAKE) -C ./libft
	cp ./libft/libft.a $(NAME)
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) *.o
	$(CC) $(FLAGS) -L. -lft_so_long ./minilibx/libmlx.a $(MLX) *.o -lz -o so_long

clean:
	rm -f *.o
	rm -f *.out
	$(MAKE) clean -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)
	rm -f so_long
	$(MAKE) fclean -C $(LIBFT_PATH)

re: fclean all

bonus:

