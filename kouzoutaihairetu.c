#include<stdio.h>

typedef struct
{
    int num;
    char name[64];
}data;


int main(void){
    data dat[10];//構造体の配列
    dat[1].num = 10;
   strcpy(dat[1].name,"Yu");
    return 0;
}