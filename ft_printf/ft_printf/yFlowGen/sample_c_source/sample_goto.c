#include <stdio.h>

int main()
{
	int count;
	count = 0;

	for(i=0;i<100;i++){
loop:
		$count++;
	}
    printf("強制的に繰り返します\n");
    count++;
    if (count >= 10) goto end;
    goto loop;
end:
    printf("プログラムを終了します");
    return 0;
}