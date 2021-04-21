CC = gcc

CFLAGS = -Wall -Wextra -Werror

main:
    $(CC) test.c gnl/get_next_line.c gnl/get_next_line_utils.c libft/libft.a cub3d.c screen_action.c write_screen.c cub3d_get_map.c cub3d_utils.c ./minilibx-linux/libmlx.a -lXext -lX11 && ./a.out

%.o: %.c
    $(CC) -Wall  -I/usr/include -Imlx_linux -O3 -c $< -o $@

$(NAME): $(OBJ)
    $(CC) -Lmlx_linux -lmlx_linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)