CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS =	printf.c \
	utils2.c \
	utils.c 
       

OBJ = $(SRCS:.c=.o)

RM = rm -rf

all: $(NAME)

libftprintf.a: $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
