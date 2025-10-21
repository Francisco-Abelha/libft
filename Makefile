NAME = libft.a
SRCS = ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprintable.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		main.c
OBJ = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: clean fclean all
