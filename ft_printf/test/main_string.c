#include <stdio.h>

int main (void)
{
	char *s = "Hinata";
	printf("__STRING__TEST__\n");
	printf("%%s\n");
	printf("[%s]\n",s);
	printf("%%3s\n");
	printf("[%3s]\n",s);
	printf("%%.3s\n");
	printf("[%.3s]\n",s);
	printf("[%%3.3s]\n");
	printf("[%3.3s]\n",s);
	printf("[%%-3s]\n");
	printf("[%-3s]\n",s);
	printf("[%%-.3s]\n");
	printf("[%-.3s]\n",s);
	printf("printf(\"[%%-3.3s]\",s);\n");
	printf("[%-3.3s]\n",s);
	printf("printf(\"[%%03s]\",s);\n");
	printf("[%03s]\n",s);
	printf("printf(\"[%%0.3s]\",s);\n");
	printf("[%0.3s]\n",s);
	printf("printf(\"[%%.03s]\",s);\n");
	printf("[%.03s]\n",s);
	printf("printf(\"[%%03.03s]\",s);\n");
	printf("[%03.03s]\n",s);
	printf("\n\n");
	printf("printf(\"[%%7s]\");\n");
	printf("[%7s]\n",s);
	printf("printf(\"[%%.7s]\",s);\n");
	printf("[%.7s]\n",s);
	printf("printf(\"[%%7.7s]\",s);)");
	printf("[%7.7s]\n",s);
	printf("printf(\"[%%-7s]\",s);\n");
	printf("[%-7s]\n",s);
	printf("printf(\"[%%-.7s]\",s);\n");
	printf("[%-.7s]\n",s);
	printf("printf(\"[%%-7.7s]\",s);\n");
	printf("[%-7.7s]\n",s);
	printf("printf(\"[%%07s]\",s);\n");
	printf("[%07s]\n",s);
	printf("printf(\"[%%0.7s]\",s);\n");
	printf("[%0.7s]\n",s);
	printf("printf(\"[%%.07s]\",s);\n");
	printf("[%.07s]\n",s);
	printf("printf(\"[%%07.07s]\",s);\n");
	printf("[%07.07s]\n",s);

}
