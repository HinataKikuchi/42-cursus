NAME	= ft_printf.all
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ./libft/ft_strlen.c ft_printf.c ft_write_char.c get_value.c ft_printf.h libft/ft_substr.c libft/ft_atoi.c libft/ft_strchr.c libft/ft_calloc.c libft/ft_isdigit.c libft/ft_bzero.c ft_write_string.c
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