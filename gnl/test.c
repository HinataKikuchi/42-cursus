#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "get_next_line_utils.c"
#include <stdlib.h>

int main(void)
{
	char *buf1;
	char *buf2;
	int test;
	int fd;
	buf1 = ft_calloc(sizeof(char),1);
	buf2 = NULL;
	test = 2;
	fd = open("./test.txt",O_RDONLY);
	while (test && !ft_memchr(buf1,'\n',10))
	{
		buf2 = ft_strjoin(buf2,buf1);
		test = read(fd, buf1,10);
		if (ft_memchr(buf1,'\n',10) || ft_memchr(buf1,EOF,10))
		{
			ft_strlcat(buf2,buf1,(size_t)((char *)ft_memchr(buf1,'\n',10) - buf1 +1));
			buf1 +=((char *)ft_memchr(buf1,'\n',10) - buf1 +1); 
			break ;
		}
		buf1 += 10;
		printf("test = %d\n",test);
	}
	printf("read buffer size is %d\nthe text is %s\n",test,buf2);
		while (test)
	{
		buf2 = ft_strjoin(buf2,buf1);
		test = read(fd, buf1,10);
		printf("test = %d\n",test);
	}
	printf("read buffer size is %d\nthe text is %s\n",test,buf2);
	return 0;
}
