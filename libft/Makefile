NAME = libft.a

FILES = ft_isalpha\
	  ft_isdigit\
	  ft_isalnum\
	  ft_isascii\
	  ft_isprint\
	  ft_strlen\
	  ft_bzero\
	  ft_memset\
	  ft_memcpy\
	  ft_memmove\
	  ft_strlcpy\
	  ft_strlcat\
	  ft_toupper\
	  ft_tolower\
	  ft_strchr\
	  ft_strrchr\
	  ft_strncmp\
	  ft_memchr\
	  ft_memcmp\
	  ft_strnstr\
	  ft_atoi\
	  ft_calloc\
	  ft_strdup\
	  ft_substr\
	  ft_strjoin\
	  ft_strtrim\
	  ft_itoa\
	  ft_strmapi\
	  ft_striteri\
	  ft_putchar_fd\
	  ft_putstr_fd\
	  ft_putendl_fd\
	  ft_putnbr_fd\
	  ft_split\
	  ft_min\
	  ft_max\
	  ft_lstnew_bonus\
	  ft_lstadd_front_bonus\
	  ft_lstsize_bonus\
	  ft_lstlast_bonus\
	  ft_lstadd_back_bonus\
	  ft_lstdelone_bonus\
	  ft_lstclear_bonus\
	  ft_lstiter_bonus\
	  ft_lstmap_bonus\
	  ft_sizeof\
	  ft_convertbase\

S = $(foreach f, $(FILES), $(f).c)

OBJ = $(S:.c=.o)


CFLAGS = -Wall -Wextra -Werror -I ../headers/

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

.c.o:
	gcc $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
