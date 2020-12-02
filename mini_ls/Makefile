NAME	= ft_mini_ls.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_mini_ls.c
OBJS	= $(SRC:.c=.o)

%.o:%.c
		$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:;         $(RM) *.o

fclean:clean;		$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY: re clean fclean all
