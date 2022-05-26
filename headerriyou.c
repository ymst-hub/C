#include<stdio.h>
#include"header.h"
//他のファイルを利用する場合指定する必要がある
//gcc -o headerriyou headerriyou.c header.cのようにコンパイルする

int main(void){
    int value;
    value = sum(50,100);
    printf("%d\n",value);
    printf("%d",public);//宣言をh、定義をcで行なっているため使える
    return 0;
}