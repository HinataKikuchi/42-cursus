#include <stdio.h>
 
int main(void){
 
  /* カウンタ変数の宣言 */
  int i;
 
  /* 繰り返し処理 */
  for(i=0;i<10;++i) {
    // ループをスキップ
    if(i==5)
      continue;
  	for(k=0;k<5;k++){
  		S=1;
  	}
    // ループをスキップ
    if(i==7)
      continue;
    // 文字列を出力
    printf("Hello! %d\n", i);
  }

  while(i>10) {
  	i++;
    // ループをスキップ
    if(i==5)
      continue;
    // ループをスキップ
    if(i==7)
      continue;
    // 文字列を出力
    printf("Hello! %d\n", i);
  }

  do{
  	i++;
    // ループをスキップ
    if(i==5)
      continue;
    // ループをスキップ
    if(i==7)
      continue;
    // 文字列を出力
    printf("Hello! %d\n", i);
  }while(i>10);

  return 0;
}
