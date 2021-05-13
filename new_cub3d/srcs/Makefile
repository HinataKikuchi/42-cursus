NAME		=	cub3d
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
LIBFT_DIR	=	../libft
GNL_DIR		=	../gnl
MLX_DIR		=	../minilibx-linux
UTILS_DIR	=	./utils
MAP_VALUE_DIR	=./map_value
SRCS		=	main.c \
				utils/cub_key_hook.c \
				utils/cub_utils.c \
				utils/error_hundling.c \
				map_value/cub_map.c \
				map_value/cub_value.c \
				map_value/cub_texture.c \

OBJS		=	${SRCS:.c=.o}

LIBFT		=	${LIBFT_DIR}/libft.a
GNL			=	${GNL_DIR}/libgnl.a
MLX			=	${MLX_DIR}/libmlx.a

INCLUDE = -I./include -I./${LIBFT_DIR} -I./${GNL_DIR} -I./

LIBS  = -L${LIBFT_DIR} -lft -L${GNL_DIR} -lgnl -L $(MLX_DIR) -lmlx -lX11 -lXext -lm

.c.o:
				${CC} ${INCLUDE} -o $@ -c $<

all:			$(NAME)

${LIBFT}:		${LIBFT_DIR}/*.c
				${MAKE} -C ${LIBFT_DIR}

$(GNL):			$(GNL_DIR)/*.c
				$(MAKE) -C $(GNL_DIR)

$(MLX):			$(MLX_DIR)/*.c
				$(MAKE) -C $(MLX_DIR)

$(NAME): $(OBJS) $(LIBFT) $(GNL) $(MLX)
				$(CC) $(INCLUDE) -o $@ $(OBJS) $(LIBS) $(INCLUDE)

clean:;			$(RM) ./*.o
				$(RM) $(UTILS_DIR)/*.o
				$(RM) $(MAP_VALUE_DIR)/*.o
				${MAKE} -C ${LIBFT_DIR} clean
				$(MAKE) -C $(GNL_DIR) clean
				$(MAKE) -C $(MLX_DIR) clean

fclean:clean;	$(RM) $(NAME)
				${MAKE} -C ${LIBFT_DIR} fclean
				$(MAKE) -C $(GNL_DIR) fclean
				$(MAKE) -C $(MLX_DIR) fclean

re:				fclean $(NAME)

test:$(NAME)
				./$(NAME) ../test_maps/test2.cub

.PHONY:			re clean fclean all