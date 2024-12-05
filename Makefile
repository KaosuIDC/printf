cc = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)
HEADER = libftprintf.h
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER) Makefile
	$(cc) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
