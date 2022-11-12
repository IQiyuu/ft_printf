NAME = libftprintf.a
LIB = libft/libft.a

FILES_P = ft_printf\
		  conversions\

S = $(foreach f, $(FILES_P), srcs/$(f).c)

OBJ = $(S:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I headers/

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	ar -rcs $@ $(OBJ)

.c.o:
	gcc $(CFLAGS) -o $@ -c $<

$(LIB):
	make -C libft/
	cp libft/libft.a $(NAME)

clean:
	rm -rf $(OBJ)
	make -C libft clean

fclean: clean
	rm -rf $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all bonus clean fclean re
