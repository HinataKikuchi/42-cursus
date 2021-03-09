#include"get_next_line_bonus.h"
// #include"get_next_line.c"
// // #include"new_get_next_line.c"
// #include"get_next_line_utils.c"

int main (int argc, char **argv/*void*/)
{
	char *line1;
	char *line2;
	char *line3;
	int		res1;
	int		res2;
	int		res3;

	// int fd = 0;
	// int fd = open("test.txt",O_RDONLY);
	int fd1 = open(argv[1], O_RDONLY);
	int fd2 = open(argv[2], O_RDONLY);
	int fd3 = open(argv[3], O_RDONLY);
	(void)argc;
	res1 = get_next_line(fd1, &line1);
	res2 = get_next_line(fd2, &line2);
	res3 = get_next_line(fd3, &line3);
	while ((res1 > 0 && res2 > 0) && res3 > 0)
	{
		printf("res1 = %d : string is = \"%s\"\n", res1, line1);
		printf("res2 = %d : string is = \"%s\"\n", res2, line2);
		printf("res3 = %d : string is = \"%s\"\n", res3, line3);
		free(line1);
		free(line2);
		free(line3);
		res1 = get_next_line(fd1, &line1);
		res2 = get_next_line(fd2, &line2);
		res3 = get_next_line(fd3, &line3);
}
	printf("res1 = %d : string is = \"%s\"\n", res1, line1);
	printf("res2 = %d : string is = \"%s\"\n", res2, line2);
	printf("res3 = %d : string is = \"%s\"\n", res3, line3);
	free(line1);
	free(line2);
	free(line3);
	close(fd1);
	close(fd2);
	close(fd3);
	return 0;
}