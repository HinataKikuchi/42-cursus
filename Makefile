CC := gcc
CFLAGS := -Wall -Wextra -Werror

all:	$(PROGRAM)

$(PROGRAM):	$(OBJS)
			$(CC) $(CFLAGS) -o $(PROGRAM)

$(NAME): libft.a

clean:
	$(RM) libft