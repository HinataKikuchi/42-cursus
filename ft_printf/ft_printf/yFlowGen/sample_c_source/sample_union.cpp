#include <stdio.h>

union Book {
    char name[30];  /* 名前 */
    int  price;  /* 価格 */
};

int main() {
    /* 共用体Book型変数の宣言 */
    union Book book = {"プログラミング言語C"};
    /* 共用体Book型配列の宣言 */
    union Book ary_book[2] = {{"プログラミング言語C"}, {"C言語入門"}};
    /* 共用体Book型ポインタの宣言 */
    union Book *ptr_book;
    printf("--- 1. 共用体Book型変数の使用 ------------------------------\n");
    printf("■名前を使用\n");
    printf("名前：%s\n", book.name);
    printf("■価格に変更\n");
    book.price = 2800;
    printf("価格：%d円\n", book.price);
    printf("------------------------------------------------------------\n");
    printf("--- 2. 共用体Book型配列の使用 ------------------------------\n");
    printf("■表示\n");
    printf("配列[0].名前：%s\n", ary_book[0].name);
    printf("配列[1].名前：%s\n", ary_book[1].name);
    printf("■変更\n");
    ary_book[0].price = 2940;
    ary_book[1].price = 2100;
    printf("配列[0].価格：%d円\n", ary_book[0].price);
    printf("配列[1].価格：%d円\n", ary_book[1].price);
    printf("------------------------------------------------------------\n");
    printf("--- 3. 共用体Book型ポインタの使用 --------------------------\n");
    ptr_book = &book;
    printf("■表示\n");
    printf("価格：%d円\n", ptr_book->price);
    printf("■変更\n");
    ptr_book->price = 3000;
    printf("価格：%d円\n", ptr_book->price);
    printf("------------------------------------------------------------\n");

    return 0;
}


union book {
    char name[16];
    int price;
};
 
int main2(void) {
    union book bk = {"桃太郎"}; // 宣言と初期化
    printf("本の名前は%sです\n", bk.name);
    printf("共用体のサイズは%ldバイトです\n", sizeof(bk));
    
    bk.price = 500; // 別のメンバへの値の代入
    printf("本の名前は%sです\n", bk.name);
    printf("本の価格は%d円です\n", bk.price);
    
    return 0;
}

/* 16bitの共用体 */
typedef union {
  unsigned short int word;
  /* 8bit2個=16bitの構造体 */
  struct {
    unsigned char lo;
    unsigned char hi;
  } lohi;
} _Sjis;

int main3(void)
{
  _Sjis jpcode;

  /* 「画」の文字コードを代入 */
  jpcode.word = 0x89e6;

  printf("16bit : %04x, 8bit high : %04x, 8bit low : %04x\n", 
          jpcode.word, jpcode.lohi.hi, jpcode.lohi.lo);

  return (0);
}