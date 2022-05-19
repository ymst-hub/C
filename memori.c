#include<stdio.h>

int main(void){
    int i,i1,i2;
    int array[4];
    char str[256]="hello";
    printf("%p\n",&i);//アドレスを表示する（メモリ上の番号を知る）
    printf("%p\n",&i1);//intは４バイト（32bit）で表示している
    printf("%p\n",&i2);
    printf("%p\n",&array);
    printf("%p\n",&array[0]);
    printf("%p\n",&array[1]);
    
    scanf("%s",&str[6]);
    printf("%s\n",str);
    return 0;
}