NAME = libftprintf.a

MY_SOURCES = ft_printf.c \
			 ft_hex.c \
			 ft_putunbr_base.c \
			 ft_putchar.c \
			 ft_putstr.c \
			 ft_nbr.c \
			 ft_strlen.c \
			 ft_strchr.c \
			 ft_unbrlen_base.c \
			 ft_nbrlen_base.c \
			 ft_writenum.c \

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CC = gcc
CFLAGS += -Wall -Werror -Wextra

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

all: $(NAME)

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
