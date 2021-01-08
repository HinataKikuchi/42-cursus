NAME	= ft_printf.all
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_printf.c
OBJS	= $(SRCS:.c=.o)

%.o:%.c
		$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:;         $(RM) *.o

fclean:clean;		$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY: re clean fclean all