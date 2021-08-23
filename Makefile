
CC = gcc

NAME = libft_so_long.a

FLAGS = -Wall -Wextra -Werror

MLX = -Lminilibx -lmlx -framework OpenGL -framework AppKit

SRC = ft_so_long.c ft_paintfct.c

#how do I include gnl.o files?

LIBFT_PATH = ./libft

MAKE = make

all: $(NAME)

$(NAME): *.c
	$(MAKE) -C ./libft
	cp ./libft/libft.a $(NAME)
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) *.o
	$(CC) $(FLAGS) -L. -lft_so_long ./minilibx/libmlx.a $(MLX) *.o -lz -o so_long
#$(SRC)
clean:
	rm -f *.o
	rm -f *.out
	$(MAKE) clean -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)
	$(MAKE) clean -C $(LIBFT_PATH)

re: fclean all

bonus:
