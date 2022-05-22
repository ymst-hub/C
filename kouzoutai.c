#include<stdio.h>
#include<string.h>

struct student {
    int year;//学年
    int clas;//クラス
    int num;//出席番号
    char name[64];//名前
};//;が必要

int main(void){
    struct student data;//呼び出し
    data.year = 10;//studantのyearに学年を代入
    strcpy(data.name,"YU");
    printf("%d\n",data.year);
    printf(data.name);


    return 0;
    
}

