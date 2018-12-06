
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CC = gcc
LIB = -L .

SRC = ft_putchar.c ft_putnbr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncpy.c 
	
OBJ = $(SRC:.c=.o)	

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) $(LIB)-c -o $@ $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
