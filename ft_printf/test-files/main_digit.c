#include <stdio.h>
#include "../ft_printf.h"

int main (void)
{
	int d = 420000;
	printf("printf(\"[%%d]\",d)\n");
	printf("[%d]\n",d);
	printf("printf(\"[%%1d]\",d)\n");
	printf("[%1d]\n",d);
	printf("printf(\"[%%.1d]\",d)\n");
	printf("[%.1d]\n",d);
	printf("printf(\"[%%1.1d]\",d)\n");
	printf("[%1.1d]\n",d);
	printf("printf(\"[%%01d]\",d)\n");
	printf("[%01d]\n",d);
	printf("printf(\"[%%.01d]\",d)\n");
	printf("[%.01d]\n",d);
	printf("printf(\"[%%01.01d]\",d)\n");
	printf("[%01.01d]\n",d);
	printf("printf(\"[%%-d]\",d)\n");
	printf("[%-d]\n",d);
	printf("printf(\"[%%-1d]\",d)\n");
	printf("[%-1d]\n",d);
	printf("printf(\"[%%-.1d]\",d)\n");
	printf("[%-.1d]\n",d);
	printf("printf(\"[%%-1.1d]\",d)\n");
	printf("[%-1.1d]\n",d);
	printf("printf(\"[%%-01d]\",d)\n");
	printf("[%-01d]\n",d);
	printf("printf(\"[%%-.01d]\",d)\n");
	printf("[%-.01d]\n",d);
	printf("printf(\"[%%-01.01d]\",d)\n");
	printf("[%-01.01d]\n",d);

	printf("\n\nprintf(\"[%%10d]\",d)\n");
	printf("[%10d]\n",d);
	printf("printf(\"[%%.10d]\",d)\n");
	printf("[%.10d]\n",d);
	printf("printf(\"[%%10.10d]\",d)\n");
	printf("[%10.10d]\n",d);
	printf("printf(\"[%%010d]\",d)\n");
	printf("[%010d]\n",d);
	printf("printf(\"[%%.010d]\",d)\n");
	printf("[%.010d]\n",d);
	printf("printf(\"[%%010.010d]\",d)\n");
	printf("[%010.010d]\n",d);
	printf("printf(\"[%%-10d]\",d)\n");
	printf("[%-10d]\n",d);
	printf("printf(\"[%%-.10d]\",d)\n");
	printf("[%-.10d]\n",d);
	printf("printf(\"[%%-10.10d]\",d)\n");
	printf("[%-10.10d]\n",d);
	printf("printf(\"[%%-010d]\",d)\n");
	printf("[%-010d]\n",d);
	printf("printf(\"[%%-.010d]\",d)\n");
	printf("[%-.010d]\n",d);
	printf("printf(\"[%%-010.010d]\",d)\n");
	printf("[%-010.010d]\n",d);

	printf("\n\nprintf(\"[%%10.1d]\",d)\n");
	printf("[%10.1d]\n",d);
	printf("printf(\"[%%10.7d]\",d)\n");
	printf("[%10.7d]\n",d);
	printf("printf(\"[%%7.10d]\",d)\n");
	printf("[%7.10d]\n",d);
}