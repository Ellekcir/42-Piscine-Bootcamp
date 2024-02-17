NAME = rush-02

CC = cc

CFLAGS = -Wall -Wextra -Werror

FILES = test.c dico-val.c val.c

$(NAME):
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

all:
	$(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re:
	fclean all

.PHONY: all clean fclean re