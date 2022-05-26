#include<stdio.h>
#include"header.h"
//他のファイルを利用する場合指定する必要がある
//gcc -o headerriyou headerriyou.c header.cのようにコンパイルする

int main(void){
    int value;
    value = sum(50,100);
    printf("%d\n",value);
    return 0;
}