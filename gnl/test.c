#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "get_next_line_utils.c"
#include <stdlib.h>

int main(void)
{
	int fd;
	char *buf;
	int res = 0;

	buf = malloc(sizeof(char) * BUFFER_SIZE);
	fd = open("test.txt", O_RDONLY);
	while (read(fd, buf, BUFFER_SIZE) != (-1))
		printf("%s\n",buf); 
	

	return 0;
}
