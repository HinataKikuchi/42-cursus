#include <stdio.h>
 
int main(void){
 
  /* �J�E���^�ϐ��̐錾 */
  int i;
 
  /* �J��Ԃ����� */
  for(i=0;i<10;++i) {
    // ���[�v���X�L�b�v
    if(i==5)
      continue;
  	for(k=0;k<5;k++){
  		S=1;
  	}
    // ���[�v���X�L�b�v
    if(i==7)
      continue;
    // ��������o��
    printf("Hello! %d\n", i);
  }

  while(i>10) {
  	i++;
    // ���[�v���X�L�b�v
    if(i==5)
      continue;
    // ���[�v���X�L�b�v
    if(i==7)
      continue;
    // ��������o��
    printf("Hello! %d\n", i);
  }

  do{
  	i++;
    // ���[�v���X�L�b�v
    if(i==5)
      continue;
    // ���[�v���X�L�b�v
    if(i==7)
      continue;
    // ��������o��
    printf("Hello! %d\n", i);
  }while(i>10);

  return 0;
}
