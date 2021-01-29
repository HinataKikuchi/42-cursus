NAME	=	tester.a
CC		=	clang
# CFLAGS	=	-Wall -Wextra -Werror
SRCS	=	main_char.c\
			main_string.c\
			main_digit.c\
			main_integer.c\
			main_unsigned.c\
			main_small_hex.c\
			main_large_hex.c\
			main_pointer.c\
			main.c\
			main_null.c
OBJS	= ${SRCS:.c=.o}

.c.o:
				${CC} ${CFLAGS} -o $@ -c $<

all:			$(NAME)

$(NAME): $(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:;			$(RM) *.o

fclean:clean;	$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			re clean fclean all