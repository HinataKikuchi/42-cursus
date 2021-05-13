NAME		=	cub3d
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
LIBFT_DIR	=	libft
GNL_DIR		=	gnl
SRCS		=	main.c \
				srcs/get_cub_value.c \
				srcs/utils/error_hundling.c


OBJS		=	${SRCS:.c=.o}
LIBFT		=	${LIBFT_DIR}/libft.a
GNL			=	${GNL_DIR}/libgnl.a

INCLUDE = -I./ -I./${LIBFT_DIR} -I./${GNL_DIR}

LIBS  = -L${LIBFT_DIR} -L${GNL_DIR} -lft -lX11 -lXext -lm
.c.o:
				${CC} ${CFLAGS} ${INCLUDE} -o $@ -c $<

all:			$(NAME)


${LIBFT}:		${LIBFT_DIR}/*.c
				${MAKE} -C ${LIBFT_DIR}

${GNL}:			${GNL_DIR}/*.c
				${MAKE} -C ${GNL_DIR}

$(NAME): $(OBJS)
				$(MAKE) -C ./libft
				cp ${LIBFT} $(NAME)
				${MAKE} -C ./gnl
				ar rcs $(NAME) $(OBJS)

clean:;			$(RM) *.o
				${MAKE} -C ${LIBFT_DIR} clean

fclean:clean;	$(RM) $(NAME)
				${MAKE} -C ${LIBFT_DIR} fclean

re:				fclean $(NAME)

.PHONY:			re clean fclean all