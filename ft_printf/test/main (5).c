#include <stdio.h>

int main(void)
{
	int a = -1000;
	printf("[%-*s]\n",2,"abcdef");
	printf("[%0*s]\n",2,"abcdef");
	printf("[%0*d]\n",2,12345);
	printf("[%-*d]\n",2,12345);
	printf("[%-*s]\n",6,"abcdef");
	printf("[%0*s]\n",6,"abcdef");
	printf("[%0*d]\n",6,12345);
	printf("[%-*d]\n",6,12345);
	printf("[%-5c]\n",'a');
	printf("[%-05c]\n",'a');
	printf("[%0-5c]\n",'a');
	printf("[%05c]\n",'a');
	printf("[%05s]\n","a");
	printf("[%----5c]\n",'a');
	printf("[%----c]\n",'a');
	printf("%d\n",printf("%c",'\0'));
	printf("__HAYASAKA'S__TEST__\n");
	printf("[%20d]\n", a);
	printf("a:[%20.42d]\n", a);
	printf("b:[%2.42d]\n", a);
	printf("c:[%21.4d]\n", a);
	printf("\n\ntest\n\n");
	printf("[%010.0c]\n", 'c');

	printf("\n%%s's test\n\n");
	char *s = "Hello World";
	printf("[%s]\n",s);
	printf("[%20s]\n",s);
	printf("[%020s]\n",s);
	printf("[%-20s]\n",s);
	printf("[%20.4s]\n",s);
	printf("[%020.4s]\n",s);
	printf("[char filld with 0 %-0*.0c]\n", 10,'z');

	return 0;
}
