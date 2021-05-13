NAME		=	cub3d
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
LIBFT_DIR	=	../libft
GNL_DIR		=	../gnl
MLX_DIR		=	../minilibx-linux
SRCS		=	main.c \
				srcs/get_cub_value.c \
				srcs/utils/error_hundling.c \
				srcs/cub3d_get_map.c

OBJS		=	${SRCS:.c=.o}


LIBFT		=	${LIBFT_DIR}/libft.a
GNL			=	${GNL_DIR}/libgnl.a
MLX			=	${MLX_DIR}/libmlx.a

INCLUDE = -I./include -I./${LIBFT_DIR} -I./${GNL_DIR} -I./

LIBS  = -L${LIBFT_DIR} -lft -L${GNL_DIR} -lgnl -lX11 -lXext -lm

.c.o:
				# ${CC} ${CFLAGS} ${INCLUDE} -o $@ -c $<
				${CC} ${INCLUDE} -o $@ -c $<

all:			$(NAME)

${LIBFT}:		${LIBFT_DIR}/*.c
				${MAKE} -C ${LIBFT_DIR}

$(NAME): $(OBJS) $(LIBFT) $(GNL) $(MLX)
				$(CC) $(INCLUDE) -o $@ -c $< $(LIBS)

clean:;			$(RM) ./*.o
				$(RM) ./utils/*.o
				${MAKE} -C ${LIBFT_DIR} clean
				$(MAKE) -C $(GNL_DIR) clean
				$(MAKE) -C $(MLX_DIR) clean

fclean:clean;	$(RM) $(NAME)
				${MAKE} -C ${LIBFT_DIR} fclean
				$(MAKE) -C $(GNL_DIR) fclean
				$(MAKE) -C $(MLX_DIR) fclean

re:				fclean $(NAME)

.PHONY:			re clean fclean all