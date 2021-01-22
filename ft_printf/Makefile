NAME	=	libftprintf.a
CC		=	clang
CFLAGS	=	-Wall -Wextra -Werror
LIBFT_DIR = libft
SRCS	=	ft_printf.c\
			get_value.c\
			ft_write_char.c\
			ft_write_string.c
OBJS	= ${SRCS:.c=.o}
LIBFT = ${LIBFT_DIR}/libft.a

INCLUDE = -I./ -I./${LIBFT_DIR}

LIBS  = -L${LIBFT_DIR} -lft
.c.o:
				${CC} ${CFLAGS} ${INCLUDE} -o $@ -c $<

all:			$(NAME)


${LIBFT}:		${LIBFT_DIR}/*.c
				${MAKE} -C ${LIBFT_DIR}
				

$(NAME): $(OBJS)
				$(MAKE) -C ./libft
				cp ${LIBFT} $(NAME)
				ar rcs $(NAME) $(OBJS)

clean:;			$(RM) *.o
				${MAKE} -C ${LIBFT_DIR} clean

fclean:clean;	$(RM) $(NAME)
				${MAKE} -C ${LIBFT_DIR} fclean

re:				fclean $(NAME)

.PHONY:			re clean fclean all