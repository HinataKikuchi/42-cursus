#include <stdio.h>
 
int main(void) {
	int int_arr1[5] = {{{0, 1, 2, 3, 4},{5, 6, 7, 8, 9},
	                   {0, 1, 2, 3, 4},{5, 6, 7, 8, 9}}};
    for(int i = 0; i < 5; i++) {
        int_arr1[i] = 4 - i; // for文を使って1個の要素ずつ代入
        if(i < 4) {
            printf("%d,", int_arr1[i]);
        } else {
            printf("%d\n", int_arr1[i]);
        }
    }
 
    int int_arr2[5] = {};
    int_arr2[2] = 2; // 要素に代入
    for(int i = 0; i < 5; i++) {
        if(i < 4) {
            printf("%d,", int_arr2[i]);
        } else {
            printf("%d\n", int_arr2[i]);
        }
    }
 
    // 文字列で初期化
    char char_arr2[16] = "Hello";
    char_arr2[0] = 'h'; // 要素に代入
    printf("%s\n", char_arr2);
 
    return 0;
}