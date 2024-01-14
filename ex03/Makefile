NAME = ex03
SOURCES = $(wildcard ./src/*.cpp)
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g3 -fsanitize=address,undefined
CC = @c++

all:	$(NAME)
$(NAME):	$(SOURCES)
		$(CC) $(CFLAGS) $(^) -o $(@)

clean:
		@rm -f $(wildcard ./src/*.o)

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re