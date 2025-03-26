CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic

SRC = _printf.c format_spec.c utils.c
OBJ = $(SRC:.c=.o)
NAME = libprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

tests: all
	gcc -Wall -Wextra -Werror -Wno-format tests/*.c -L. -lprintf -o test_printf
	./test_printf
