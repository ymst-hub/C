#include<stdio.h>

void func(int *pvalue);//プロトタイプ宣言

int main(void){
    int value =0;
    printf("&value = %p\n",&value);
    func(&value);//&はメモリを指す
    printf("value = %d\n",value);
    return 0;
}
void func(int *pvalue){//配列を引数にする場合、ポインタで渡されることに留意
    printf("pvalue = %p\n",pvalue);
    *pvalue = 100;//valueのメモリを100にする
    return;
}