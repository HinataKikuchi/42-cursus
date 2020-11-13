CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
LDFLAGS	= -L/usr/local/lib
LIBS	= 
OBJS	= ft_atoi.o ft_isascii.o  ft_memchr.o ft_putchar_fd.o \
	ft_strchr.o ft_strlen.o ft_strtrim.o ft_bzero.o ft_isdigit.o \
	ft_memcmp.o ft_putendl_fd.o ft_strdup.o ft_strmapi.o ft_substr.o \
	ft_calloc.o ft_isprint.o ft_memcpy.o ft_putnbr_fd.o ft_strjoin.o \
	ft_strnchr.o ft_tolower.o ft_isalnum.o ft_itoa.o ft_memmove.o \
	ft_putstr_fd.o ft_strlcat.o ft_strncmp.o ft_toupper.o ft_isalpha.o \
	ft_memccpy.o ft_memset.o ft_split.o ft_strlcpy.o ft_strrchr.o main.o
#OBJS := *.o
PROGRAM	= main

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) $(LIBS) -o $(PROGRAM)

clean:;         $(RM) *.o *~ $(PROGRAM)

