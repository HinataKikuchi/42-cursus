#include <stdio.h>

int main()
{
	int count;
	count = 0;

	for(i=0;i<100;i++){
loop:
		$count++;
	}
    printf("�����I�ɌJ��Ԃ��܂�\n");
    count++;
    if (count >= 10) goto end;
    goto loop;
end:
    printf("�v���O�������I�����܂�");
    return 0;
}