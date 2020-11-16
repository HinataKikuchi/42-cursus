#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("%p", memccpy("abc","def",'z', 3));
}
