#include <stdio.h>
//ポインタはショートカットを作るイメージ

int main (void){
    int *p,i;//ポインタの宣言
    p = NULL;//ポインタは適当な値が入っているため初期化する（NULLポインタ）
    p = &i;//iのメモリのアドレスをpに代入
    printf("p=%p\n",p);
    printf("i=%p\n",&i);
    *p = 10;//ポインタを通常の変数に切り替える
    printf("p=%d\n",*p);
    printf("i=%d\n",i);//pのアドレスに10が代入されているため、iも変更される


    return 0;
}