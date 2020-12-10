#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "get_next_line_utils.c"
#include <stdlib.h>

int main(void)
{
	char **line;
	int fd;
	char *buf;
	int res = 0;
	static char *save;
	size_t	buf_len;
	size_t	save_len;

	line = malloc(sizeof(char *) * 1);
	*line = malloc(sizeof(char) * (2*(BUFFER_SIZE)));
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	save = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	fd = open("test.txt", O_RDONLY);
	while (read(fd, buf, BUFFER_SIZE)/* && ft_memchr(buf,'\n',BUFFER_SIZE)*/)
	{
		buf_len = ft_strlen(buf);
		if (save = ft_memchr(buf,'\n',BUFFER_SIZE))
		{
			save_len = ft_strlen(save);
			*line = ft_strjoin(*line,ft_substr(buf, 0, (buf_len - save_len)));
			while (*save == '\n')
				save++;
			break ;
		}
		ft_strjoin(line[0],buf);
	}
	printf("%s\n",line[0]);
	printf("%s",save);
	return 0;
}
