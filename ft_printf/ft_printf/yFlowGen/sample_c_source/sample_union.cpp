#include <stdio.h>

union Book {
    char name[30];  /* ���O */
    int  price;  /* ���i */
};

int main() {
    /* ���p��Book�^�ϐ��̐錾 */
    union Book book = {"�v���O���~���O����C"};
    /* ���p��Book�^�z��̐錾 */
    union Book ary_book[2] = {{"�v���O���~���O����C"}, {"C�������"}};
    /* ���p��Book�^�|�C���^�̐錾 */
    union Book *ptr_book;
    printf("--- 1. ���p��Book�^�ϐ��̎g�p ------------------------------\n");
    printf("�����O���g�p\n");
    printf("���O�F%s\n", book.name);
    printf("�����i�ɕύX\n");
    book.price = 2800;
    printf("���i�F%d�~\n", book.price);
    printf("------------------------------------------------------------\n");
    printf("--- 2. ���p��Book�^�z��̎g�p ------------------------------\n");
    printf("���\��\n");
    printf("�z��[0].���O�F%s\n", ary_book[0].name);
    printf("�z��[1].���O�F%s\n", ary_book[1].name);
    printf("���ύX\n");
    ary_book[0].price = 2940;
    ary_book[1].price = 2100;
    printf("�z��[0].���i�F%d�~\n", ary_book[0].price);
    printf("�z��[1].���i�F%d�~\n", ary_book[1].price);
    printf("------------------------------------------------------------\n");
    printf("--- 3. ���p��Book�^�|�C���^�̎g�p --------------------------\n");
    ptr_book = &book;
    printf("���\��\n");
    printf("���i�F%d�~\n", ptr_book->price);
    printf("���ύX\n");
    ptr_book->price = 3000;
    printf("���i�F%d�~\n", ptr_book->price);
    printf("------------------------------------------------------------\n");

    return 0;
}


union book {
    char name[16];
    int price;
};
 
int main2(void) {
    union book bk = {"�����Y"}; // �錾�Ə�����
    printf("�{�̖��O��%s�ł�\n", bk.name);
    printf("���p�̂̃T�C�Y��%ld�o�C�g�ł�\n", sizeof(bk));
    
    bk.price = 500; // �ʂ̃����o�ւ̒l�̑��
    printf("�{�̖��O��%s�ł�\n", bk.name);
    printf("�{�̉��i��%d�~�ł�\n", bk.price);
    
    return 0;
}

/* 16bit�̋��p�� */
typedef union {
  unsigned short int word;
  /* 8bit2��=16bit�̍\���� */
  struct {
    unsigned char lo;
    unsigned char hi;
  } lohi;
} _Sjis;

int main3(void)
{
  _Sjis jpcode;

  /* �u��v�̕����R�[�h���� */
  jpcode.word = 0x89e6;

  printf("16bit : %04x, 8bit high : %04x, 8bit low : %04x\n", 
          jpcode.word, jpcode.lohi.hi, jpcode.lohi.lo);

  return (0);
}